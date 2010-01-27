SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL';

CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci ;
USE `mydb`;

-- -----------------------------------------------------
-- Table `mydb`.`Employees`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `mydb`.`Employees` ;

CREATE  TABLE IF NOT EXISTS `mydb`.`Employees` (
  `id` INT UNSIGNED NOT NULL AUTO_INCREMENT ,
  `ssn` INT UNSIGNED NOT NULL ,
  `first_name` VARCHAR(45) NOT NULL ,
  `last_name` VARCHAR(45) NOT NULL ,
  `manager` INT UNSIGNED NULL DEFAULT 0 ,
  PRIMARY KEY (`id`) ,
  CONSTRAINT `fk_Employees_manager`
    FOREIGN KEY (`manager` )
    REFERENCES `mydb`.`Employees` (`id` )
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;

CREATE INDEX `fk_Employees_manager` ON `mydb`.`Employees` (`manager` ASC) ;

CREATE INDEX `idx_Employees_ssn` ON `mydb`.`Employees` (`ssn` ASC) ;


-- -----------------------------------------------------
-- Table `mydb`.`Projects`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `mydb`.`Projects` ;

CREATE  TABLE IF NOT EXISTS `mydb`.`Projects` (
  `id` INT NOT NULL AUTO_INCREMENT ,
  `manager` INT UNSIGNED NOT NULL ,
  `name` VARCHAR(45) NOT NULL ,
  PRIMARY KEY (`id`) ,
  CONSTRAINT `fk_Projects_manager`
    FOREIGN KEY (`manager` )
    REFERENCES `mydb`.`Employees` (`id` )
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;

CREATE INDEX `fk_Projects_manager` ON `mydb`.`Projects` (`manager` ASC) ;


-- -----------------------------------------------------
-- Table `mydb`.`Billing`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `mydb`.`Billing` ;

CREATE  TABLE IF NOT EXISTS `mydb`.`Billing` (
  `id` INT UNSIGNED NOT NULL AUTO_INCREMENT ,
  `employee` INT UNSIGNED NOT NULL ,
  PRIMARY KEY (`id`) ,
  CONSTRAINT `fk_Billing_employee`
    FOREIGN KEY (`employee` )
    REFERENCES `mydb`.`Employees` (`id` )
    ON DELETE CASCADE
    ON UPDATE CASCADE)
ENGINE = InnoDB;

CREATE INDEX `fk_Billing_employee` ON `mydb`.`Billing` (`employee` ASC) ;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Dec 23, 2021 at 01:17 PM
-- Server version: 10.4.19-MariaDB
-- PHP Version: 8.0.7

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db`
--

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `Roll` int(3) DEFAULT NULL,
  `Name` varchar(20) DEFAULT NULL,
  `Gender` varchar(10) DEFAULT NULL,
  `Age` int(2) DEFAULT NULL,
  `GPA` double(3,2) DEFAULT NULL,
  `City` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`Roll`, `Name`, `Gender`, `Age`, `GPA`, `City`) VALUES
(101, 'Maruf', 'Male', 18, 4.05, 'Dhaka'),
(109, 'Lisan', 'Male', 18, 4.00, 'Dhaka'),
(102, 'Mithila', 'Female', 21, 5.00, 'Sylhet'),
(105, 'Asif', 'Male', 22, 4.25, 'Dinajpur'),
(104, 'Fariba', 'Female', 32, 4.63, 'Sylhet'),
(103, 'Mahin', 'Male', 34, 3.46, 'Dhaka'),
(106, 'Sadia', 'Female', 37, 3.89, 'Coxsbazar'),
(107, 'Sinthiya', 'Female', 76, 4.78, 'Rangpur'),
(108, 'Sakib', 'Male', 98, 3.99, 'Comilla');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

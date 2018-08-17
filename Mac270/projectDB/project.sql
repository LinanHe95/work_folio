-- phpMyAdmin SQL Dump
-- version 4.7.7
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 28, 2018 at 05:55 PM
-- Server version: 10.1.30-MariaDB
-- PHP Version: 7.2.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `project`
--

-- --------------------------------------------------------

--
-- Table structure for table `survey`
--

CREATE TABLE `survey` (
  `id` int(11) NOT NULL,
  `firstname` varchar(255) NOT NULL,
  `lastname` varchar(255) NOT NULL,
  `category` varchar(15) NOT NULL,
  `first` tinyint(1) NOT NULL,
  `exhibits` tinyint(2) NOT NULL,
  `tdr` tinyint(2) NOT NULL,
  `apple` tinyint(2) NOT NULL,
  `avid` tinyint(2) NOT NULL,
  `frestival` tinyint(2) NOT NULL,
  `academic` tinyint(2) NOT NULL,
  `papers` tinyint(2) NOT NULL,
  `expectations` tinyint(2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `survey`
--

INSERT INTO `survey` (`id`, `firstname`, `lastname`, `category`, `first`, `exhibits`, `tdr`, `apple`, `avid`, `frestival`, `academic`, `papers`, `expectations`) VALUES
(0, 'bb', 'bbb', 'Faculty member', 1, 0, 0, 1, 1, 1, 1, 1, 1),
(0, 'bb', 'bbb', 'Faculty member', 1, 1, 1, 1, 1, 1, 1, 1, 1);

-- --------------------------------------------------------

--
-- Table structure for table `tb_form`
--

CREATE TABLE `tb_form` (
  `id` int(10) NOT NULL,
  `u_name` varchar(25) NOT NULL,
  `u_email` varchar(30) NOT NULL,
  `u_subject` varchar(30) NOT NULL,
  `u_message` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tb_form`
--

INSERT INTO `tb_form` (`id`, `u_name`, `u_email`, `u_subject`, `u_message`) VALUES
(1, '123', '123', '123', '123');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `uID` int(11) NOT NULL,
  `uName` varchar(25) NOT NULL,
  `uPass` varchar(25) NOT NULL,
  `uLevel` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `UID` varchar(10) NOT NULL,
  `UNAME` varchar(20) DEFAULT NULL,
  `LOGID` varchar(10) NOT NULL,
  `PASS` varchar(20) NOT NULL,
  `SLEVEL` char(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`UID`, `UNAME`, `LOGID`, `PASS`, `SLEVEL`) VALUES
('001', 'name1', '100', '101', 'vp');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tb_form`
--
ALTER TABLE `tb_form`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`uID`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`UID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tb_form`
--
ALTER TABLE `tb_form`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `uID` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

<?php
$server="localhost";
$user="root";
$pass="";
$dbname="projects";

//creating connection to mysqli//

$conn=new mysqli($server,$user,$pass,$dbname);
//checking connection
if(conn->error){
    die("connection failed:" .$conn->connect_error);
}

$name= mysqli_real_escape_string($conn,$_POST['uname']);
$address= mysqli_real_escape_string($conn,$_POST['uaddress']);
$email= mysqli_real_escape_string($conn,$_POST['uemail']);
$number= mysqli_real_escape_string($conn,$_POST['nfruits']);

$fruit= mysqli_real_escape_string($conn,$_POST['favorite']);
$brochure= mysqli_real_escape_string($conn,$_POST['brochure']);


$sql="INSERT INTO infom()VALUE()



if($conn->query($sql)===TRUE){
    echo"Record Added Succesfully";
}else{
    echo "Error".$sql."<br>".$conn->error;
}
$conn->close();

<?php>
//store the input from login.php
$username=$_POST['user'];
$password=$_POST['pass'];
$db_name="projects";

//this to connect the sql
$link=mysqli_connect("localhost","root","walter1","projects") or die("Cannot connect to DB");
//checking the DB if it the same
$result=mysqli_query($link,"select*from user where uName='$username' abd uPass='password'")or die("no connection", mysqli_error($link));

$row=mysqli_fetch_array($result);
//now if not same as Db it will 
if($row['username']==""&&$row['password']==""){
    echo"Fail to login";
}elseif($row['uName']==$username&&$row['uPass']==$password){
    echo"Login Success";
    header('location: test.php');
}else
    echo"Failed to login";
?>
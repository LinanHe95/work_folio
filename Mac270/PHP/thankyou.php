<?php
/*require="connection.php";*/
$conn=mysqli_connect("localhost","root","","project");
$name=mysqli_real_escape_string($conn,$_POST["u_name"]);
$email=mysqli_real_escape_string($conn,$_POST["u_email"]);
$subject=mysqli_real_escape_string($conn,$_POST["u_subject"]);
$message=mysqli_real_escape_string($conn,$_POST["u_message"]);
    
$query="insert into tb_form(u_name,u_email,u_subject,u_message)
values($name,$email,$subject,$message)";

if (mysqli_query($conn, $query)){
    echo"Good";
}else{
    echo"Could not enter data: $quary.", mysql_error($conn);
}
?>

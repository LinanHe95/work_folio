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

$pro_name= mysqli_real_escape_string($conn,$_POST['pro_name']);
$pro_num= mysqli_real_escape_string($conn,$_POST['pro_num']);
$building= mysqli_real_escape_string($conn,$_POST['building']);
$pro_type= mysqli_real_escape_string($conn,$_POST['pro_type']);
$location= mysqli_real_escape_string($conn,$_POST['location']);
$pro_date= mysqli_real_escape_string($conn,$_POST['pro_date']);
$ser_provider= mysqli_real_escape_string($conn,$_POST['ser_provider']);
$com_date= mysqli_real_escape_string($conn,$_POST['com_date']);
$status= mysqli_real_escape_string($conn,$_POST['status']);
$des_team= mysqli_real_escape_string($conn,$_POST['des_team']);
$des_cost= mysqli_real_escape_string($conn,$_POST['des_cost']);
$con_cost= mysqli_real_escape_string($conn,$_POST['con_cos']);
$fe_cost= mysqli_real_escape_string($conn,$_POST['fe_cost']);
$Boro_President= mysqli_real_escape_string($conn,$_POST['Boro_President']);
$BP_Amount= mysqli_real_escape_string($conn,$_POST['BP_Amoun']);
$Bp_FY_received= mysqli_real_escape_string($conn,$_POST['Bp_FY_received']);
$Bp_CP= mysqli_real_escape_string($conn,$_POST['Bp_CP#']);
$Mayor= mysqli_real_escape_string($conn,$_POST['Mayor']);
$Mayor_Amount= mysqli_real_escape_string($conn,$_POST['Mayor_Amount']);
$Mayor_FY_received= mysqli_real_escape_string($conn,$_POST['Mayor_FY_received']);
$Mayor_CP= mysqli_real_escape_string($conn,$_POST['Mayor_CP#']);
$In_House= mysqli_real_escape_string($conn,$_POST['In_House']);
$In_House_Amount= mysqli_real_escape_string($conn,$_POST['In_House_Amount']);
$In_House_FY_received= mysqli_real_escape_string($conn,$_POST['In_House_FY_received']);
$Capital_Project= mysqli_real_escape_string($conn,$_POST['Capital_Projec']);
$Capital_Project_Amount= mysqli_real_escape_string($conn,$_POST['Capital_Project_Amount']);
$Capital_Project_FY_received= mysqli_real_escape_string($conn,$_POST['Capital_Project_FY_received']);
$CUNY_2020= mysqli_real_escape_string($conn,$_POST['CUNY_2020']);
$CUNY_Amount= mysqli_real_escape_string($conn,$_POST['CUNY_Amount']);
$CUNY_FY_Amount_received= mysqli_real_escape_string($conn,$_POST['CUNY_FY_Amount_received']);
$SAM_CCAP= mysqli_real_escape_string($conn,$_POST['SAM_CCAP']);
$SAM_Amount= mysqli_real_escape_string($conn,$_POST['SAM_Amount']);
$SAM_FY_received= mysqli_real_escape_string($conn,$_POST['SAM_FY_received']);
$Pirate_Grant= mysqli_real_escape_string($conn,$_POST['Pirate_Grant']);
$Pirate_Amount= mysqli_real_escape_string($conn,$_POST['Pirate_Amount']);
$Pirate_FY_received= mysqli_real_escape_string($conn,$_POST['Pirate_FY_received']);
$Federal_State= mysqli_real_escape_string($conn,$_POST['Federal_State']);
$Federal_Amount= mysqli_real_escape_string($conn,$_POST['Federal_Amount']);
$Federal_FY_received= mysqli_real_escape_string($conn,$_POST['Federal_FY_received']);
$DCAS= mysqli_real_escape_string($conn,$_POST['DCAS']);
$DCAS_Amount= mysqli_real_escape_string($conn,$_POST['DCAS_Amount']);
$DCAS_FY_received= mysqli_real_escape_string($conn,$_POST['DCAS_FY_received']);
$DCAS_CAP= mysqli_real_escape_string($conn,$_POST['DCAS_CAP']);
$DCAS_CAP_Amount= mysqli_real_escape_string($conn,$_POST['DCAS_CAP_Amount']);
$DCAS_CAP_FY_received= mysqli_real_escape_string($conn,$_POST['DCAS_CAP_FY_received']);
$Energy_Conservation= mysqli_real_escape_string($conn,$_POST['Energy_Conservation']);
$Energy_Conserv_Amount= mysqli_real_escape_string($conn,$_POST['Energy_Conserv_Amount']);
$Energy_FY_received= mysqli_real_escape_string($conn,$_POST['Energy_FY_received']);


$sql="INSERT INTO infom(Boro_President, BP_Amount,	Bp_FY_received,	Bp_CP#,	Mayor,	Mayor_Amount,	Mayor_FY_received,	Mayor_CP#,	In_House,	In_House_Amount,	In_House_FY_received,	Capital_Project	,Capital_Project_Amount,	Capital_Project_FY_received,	CUNY_2020,	CUNY_Amount,	CUNY_FY_Amount_received,	SAM_CCAP,	SAM_Amount,	SAM_FY_received	Pirate_Grant,	Pirate_Amount,	Pirate_FY_received,	Federal_State,	Federal_Amount,	Federal_FY_received	DCAS,	DCAS_Amount,	,DCAS_FY_received,	DCAS_CAP,	DCAS_CAP_Amount,	DCAS_CAP_FY_received,	Energy_Conservation,	Energy_Conserv_Amount,	Energy_FY_received) VALUES('$Boro_President','$BP_Amount','$Bp_FY_received','$Bp_CP#','$Mayor','$Mayor_Amount','	$Mayor_FY_received','$Mayor_CP#','$In_House','$In_House_Amount','$In_House_FY_received','$Capital_Project','$Capital_Project_Amount','$Capital_Project_FY_received','$CUNY_2020','$CUNY_Amount','$CUNY_FY_Amount_received','$SAM_CCAP','$SAM_Amount','$SAM_FY_received','$Pirate_Grant','$Pirate_Amount','$Pirate_FY_received','$Federal_State','$Federal_Amount','$Federal_FY_received','$DCAS','$DCAS_Amount','$DCAS_FY_received','$DCAS_CAP','$DCAS_CAP_Amount','$DCAS_CAP_FY_received','$Energy_Conservation','$Energy_Conserv_Amount','$Energy_FY_received')";

if($conn->query($sql)===TRUE){
    echo"Record Added Succesfully";
}else{
    echo "Error".$sql."<br>".$conn->error;
}
$conn->close();



?>

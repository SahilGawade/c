<?php
// variable
$var=10;
echo "var=".$var."\n";
echo "<br>";
echo "var=",$var,"\n";
echo "<br>";
print "var=".$var;
echo "<br>";
print "ouput for var_dump: ";
var_dump($var);
echo "<br>";
print "ouput for var_export: ";
var_export($var);
echo "<br>";
//datatypes
//primitive
//int
$varint=10;
echo "varint=",$varint,"<br>";
echo "varint type=",gettype($varint),"<br>";
//float(double)
$varfloat=13.456;
echo "varfloat=",$varfloat,"<br>";
echo "varfloat type=",gettype($varfloat),"<br>";
$varfloat1=13.1234567890123456789;
echo "double varfloat1=",$varfloat1,"<br>";
//string
$varstr="abcdef";
echo "varstr=",$varstr,"<br>";
echo "varstr type=",gettype($varstr),"<br>";
//boolean
$varbool=FALSE;
echo "varbool=",$varbool,"<br>";
//var_dump(varbool);
echo "varbool type=",gettype($varbool),"<br>";
//userdef
//array
$vararr=array(1,2,3,5,6);
echo "$vararr=",$vararr;
var_dump($vararr);
class Emp {
    private $id,$name;
    public function accept($id,$name){
        $this->id=$id;
        $this->name=$name;
    }
public function disp(){
        echo "<br>id=",$this->id,"<br>";
        echo "name=",$this->name,"<br>";
    }
}
$e1=new Emp();
$e1->accept(1,"abc");
$e1->disp();
?>

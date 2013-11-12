<?php

function isPermutation($string1,$string2){
	
	if(strlen($string1)!=strlen($string2)){
		return 0;
	}
	$s1=$s2=0;
	for($i=0 ; $i<strlen($string1) ; $i++){
		$s1+=ord($string1[$i]);
		$s2+=ord($string2[$i]);	
	}
	if($s1==$s2){
		return 1;
	}
	return 0;
}

$string1 = "abcdefg";
$string2 = "acbegdf";

if(isPermutation($string1,$string2)){
	
	echo "Strings are permutation";

}else
{
	echo "Strings are not permutation";

}

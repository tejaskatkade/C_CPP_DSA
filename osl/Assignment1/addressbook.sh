echo -e "Address Book\n"

echo -e "Enter File name:\n"
read fname

touch $fname

echo -e "e_Id \t e_Name \t DOB \t\t salary \t location \t" >> $fname

ch=0
while [ $ch -lt 7 ]
do

echo -e "1) Create Address Book\n"
echo -e "2) View Address Book\n"
echo -e "3) Insert a Record\n"
echo -e "4) Delete a Record\n"
echo -e "5) Modify a Record\n"
echo -e "6) Search a Record\n"
echo -e "7) Exit\n"




echo "Enter Your Choice:"
read ch

case $ch in 

	1)

	echo "Enter number of records:"
	read n
	
		
	for((i=0;i<$n;i++))
	do
	
	echo "Enter e_id:"
	read eid
	
	echo "Enter name:"
	read name
	
	echo "Enter DOB:"
	read dob

	echo "Enter salary:"
	read sal
	
	echo "Enter location:"
	read loc
	
	echo -e "$eid \t $name\t $dob \t $sal \t $loc \t" >> $fname
	
	done
	
;;

	2)

	cat  $fname
	
;;

	3) 
	
	echo "Enter e_id:"
	read eid
	
	echo "Enter name:"
	read name
	
	echo "Enter DOB:"
	read dob

	echo "Enter salary:"
	read sal
	
	echo "Enter location:"
	read loc
	
	echo -e "$eid \t $name\t $dob \t $sal \t $loc \t" >> $fname	

;;
	4)
	
	echo "Enter Employee ID to delete:"
	read eid

	if grep -w $eid $fname
	then
		grep -wv $eid $fname >>temp
		rm -i $fname
		mv temp $fname	
	else
		echo "record not found"
	fi
		
	
;;
	5)
	echo "Enter Employee ID to modify:"
	read eid

	if grep -w $eid $fname
	then
		grep -wv $eid $fname >>temp
		rm $fname
		mv temp $fname	

		echo "Enter e_id:"
		read eid
	
		echo "Enter name:"
		read name
	
		echo "Enter DOB:"
		read dob

		echo "Enter salary:"
		read sal
	
		echo "Enter location:"
		read loc
	
		echo -e "$eid \t $name\t $dob \t $sal \t $loc \t" >> $fname	
		else
			echo "record not found"
		fi
;;
	
	6)
		echo "Enter Employee id to search:"
		read eid
		if grep -w $eid $fname
		then
			#grep -w $eid $fname
			echo "Record found"
		else
			echo "record not found"
		fi
;;

	*)
		

esac

done
















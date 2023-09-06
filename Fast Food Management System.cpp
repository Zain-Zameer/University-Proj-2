#include <stdio.h>
#include <string.h> // to handle strings
#include <cstdlib> // For system function
#include <unistd.h> // for sleep function

int main(){
	// Declared Variables
	char empname[5][50];
	char employee[20];
	int select,item,total=0,repeat,menuloop;
	int zingloop,beefloop,clubloop,broastloop,cdloop;
	// Initialized Variables
	int zingcount=0,beefcount=0,clubcount=0,broastcount=0,drinkcount=0;
	int zingtotal=0,beeftotal=0,clubtotal=0,broasttotal=0,cdtotal=0;
	int empselect,empnum,rej;
	int salesleasure=0;
	
	// Starting of program
	while(1){
	system("cls");
	printf(":::::::::::::::::::::::FAST FOOD MANAGEMENT SYSTEM:::::::::::::::::::::::::::\n\n");
	printf("                                                  Created By: 1. Okasha Nadeem Jafri\n\t\t\t\t\t\t\t\t2. Muhammad Zain\n\n");
	printf("---------------------------------\n");
	printf("You Can Select Following Options:\n");
	printf("---------------------------------\n\n");
	printf("1.MENU\n\n2.Employee Details\n\n3.Sales Leasure\n\n4.Exit\n\n");
	printf("---------------------------------\n");
	printf("Select: ");
	scanf("%d",&select);
	repeat=1;
	if(select==1){
		while(repeat){
			system("cls");
		// Employee can select food from menu and print bill
		
		printf("===============MENU===================\n\n");
		printf("1.Zinger Burgur  Rs 350\n\n2.Beef Burgur    Rs 280\n\n3.Club SAndwich  Rs 330\n\n4.Broast         Rs 400\n\n5.Cold Drink     Rs 100\n\n");
		printf("---------------------------------\n");
		printf("\nSelect: ");
		scanf("%d",&item);
		if(item==1){
			printf("\n\nHow many Zingers do you want :");
			scanf("%d",&zingloop);
			for(int i=0;i<zingloop;i++){
				zingcount=zingcount+1;
				zingtotal=zingtotal+350;
				total=total+350;
			}
		}
		else if(item==2){
			printf("\n\nHow many Beef Burgurs do you want :");
			scanf("%d",&beefloop);
			for(int j=0;j<beefloop;j++){
				beefcount=beefcount+1;
				beeftotal=beeftotal+280;
				total=total+280;
			}
		}
		else if(item==3){
			printf("\n\nHow many Club Sandwitches do you want :");
			scanf("%d",&clubloop);
			for(int k=0;k<clubloop;k++){
				clubcount=clubcount+1;
				clubtotal=clubtotal+330;
				total=total+330;
			}
		}
		else if(item==4){
			printf("\n\nHow many Broast do you want :");
			scanf("%d",&broastloop);
			for(int l=0;l<broastloop;l++){
				broastcount=broastcount+1;
				broasttotal=broasttotal+400;
				total=total+400;
			}
		}
		else if(item==5){
			printf("\n\nHow many Cold Drinks do you want :");
			scanf("%d",&cdloop);
			for(int m=0;m<cdloop;m++){
				drinkcount=drinkcount+1;
				cdtotal=cdtotal+100;
				total=total+100;
			}
		}
		else{
			printf("\n\n ::.Please Enter Valid Comman::. \n");
		}
		printf("\n\nDo You Want To Shop More |**| or print Bill [| |]? \n");
		printf("\n\nPress (1) to shop more\nPress (2) to print bill\n\nEnter Here: ");
		scanf("%d",&menuloop);
		if(menuloop==2){
			system("cls");
			printf("-----------------BILL--------------------\n");
			printf("-----------------------------------------\n\n");
			printf("%d  Zinger Burgur    350 X %d  = %d\n\n",zingcount,zingcount,zingtotal);
			printf("%d  Beef   Burgur    280 X %d  = %d\n\n",beefcount,beefcount,beeftotal);
			printf("%d  Club Sandwitch   330 X %d  = %d\n\n",clubcount,clubcount,clubtotal);
			printf("%d  Broast           400 X %d  = %d\n\n",broastcount,broastcount,broasttotal);
			printf("%d  Cold Drink       100 X %d  = %d\n\n",drinkcount,drinkcount,cdtotal);
			printf("                             ----\n");
			printf("                       Total  %d\n\n\n",total);
			sleep(4);
			salesleasure+=total;
			total=0;
			zingcount=0;
			zingtotal=0;
			beefcount=0,beeftotal=0;
			clubcount=0,clubtotal=0;
			broastcount=0,broasttotal=0;
			drinkcount=0,cdtotal=0;
			repeat=repeat-1;
		}
	}
	}
	else if(select==2){
		system("cls");
		repeat=1;
		while(repeat){
		system("cls");
		printf("----------------------------\n");
		printf("Following are the actions:\n");
		printf("----------------------------\n");
		printf("\n1.Add Employee\n\n2.Remove Employee\n\n3.Show Employees\n\n4.Exit\n");
		printf("----------------------------\n");
		printf("\nSelect: ");
		scanf("%d",&empselect);
		if(empselect==1){
			printf("\n\nHow many Employees do you want to Add: ");
			scanf("%d",&empnum);
			for(int a=0;a<empnum;a++){
			printf("\n\nEnter Employee Name: ");
			scanf("%s",&empname[a]);
			}
			printf("\nEmployees Added Successfully.\n\n");
			sleep(4);
		}
		else if(empselect==2){
			   printf("\nEnter employee (1-5): ");
    			scanf("%d", &rej);
    				if (rej >= 1 && rej <= 5) {
        				printf("\nRemoving Employee: %s\n", empname[rej - 1]);
        				strcpy(empname[rej - 1], "empty");
        				sleep(3);
        
       					 // Print updated list of employees
        				printf("\nUpdated Employee List:\n");
        				for (int i = 0; i < 5; i++) {
            				if (strcmp(empname[i], "empty") != 0) {
                				printf("%s\n", empname[i]);
            					}
        					}
        					sleep(4);
    				}
    		}
    	else if(empselect==3){
    		printf("\n\n=====================Employee Details==================\n\n");
    		for(int a=0;a<empnum;a++){
				printf("%s\n",&empname[a]);
			}
			sleep(4);
		}
		else if(empselect==4){
			repeat=repeat-1;
		}		
	 	else{
       		 printf("Invalid employee selection.\n");
 			  	}
		}
	}
	else if(select == 3){
		system("cls");
		printf("\n\n:::::::::::::::SALES LEASURE:::::::::::::::::::::\n");
		printf("\nToday\'s Total Sales: %d\n\n",	salesleasure);
		printf("-------------------------------------------------\n\n");
		sleep(4);
	}
	else if(select==4){
		system("cls");
		printf("\n\n:::::::::::ALLAH HAFIZ:::::::::::\n\n");
		sleep(2);
		break;
	}
	else{
		printf("---------------------------------");
		printf("\nPlease Enter Valid Command!\n");
		printf("---------------------------------\n");
	}
}
	return 0;
}

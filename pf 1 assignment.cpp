#include <stdio.h>
 #include <time.h>
int main(){

    float quantity_tom,quantity_pot,quantity_onion,quantity_green;
    float item,total_price_tom,total_price_pot,total_price_onion,total_price_green,grand_total;
    int recieved_amount,remaining_amount;



          
printf("\n\t\t***************************^^^^^^^^^^^^^^^^^^^^^^^^^^^^***********************\n");

printf("\n\t\t\t\twelcoome to happy glocery shop:\n");
printf("\n\t\t*****************************<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<************************\n");



            printf("\n\t\t\t\ttoday's per kilogram price list :\n");

            printf("\n\n\t\ttomatoes:200\t\tonion:350\t\tpotetoes:150\t\tgrean peas:200");

printf("\n\t\t-------------------------------------------------------------------------------------\n\t\t-------------------------------------------------------------------------------------\n");

printf("\n\n\t\t\tplease enter your desired  quantity:\n");

printf("\n\t\t\tenter the quantity of tomatoes:");
scanf("%f",&quantity_tom);

printf("\n\t\t\tenter the quantity of onion:");
scanf("%f",&quantity_onion);

printf("\n\t\t\tenter the quantity of potetoes:");
scanf("%f",&quantity_pot);

printf("\n\t\t\tenter the quantity of grrenpeas:");
scanf("%f",&quantity_green);
                         
                         printf("\n\t\t#############################################################################\n");
                         
                         printf("\n\t\t\t\t\t\tTotal Bill\n");
                         
                    printf("\n\t\t\titem\t\t||\tquantity\t\t||\ttotal price\n");
                    total_price_tom=quantity_tom*200;
                    total_price_onion=quantity_onion*350;
                    total_price_pot=quantity_pot*150;
                    total_price_green=quantity_green*200;
                   printf("\n\t\t\ttomato\t\t||\t%.2f\t\t\t||\t%.2f\n",quantity_tom, total_price_tom);
                    printf("\n\t\t\tonions\t\t||\t%.2f\t\t\t||\t%.2f\n",quantity_onion,total_price_onion);
                     printf("\n\t\t\tpototo\t\t||\t%.2f\t\t\t||\t%.2f\n",quantity_pot, total_price_pot);
                      printf("\n\t\t\tgreen peas\t||\t%.2f\t\t\t||\t%.2f\n",quantity_green,total_price_green);
                      
                      printf("\n\t\t.........................................................................................\n");
                     printf("\n\t\t enter the recieved amount:");
                scanf("%d",&recieved_amount);
                
                grand_total=total_price_tom+total_price_onion+total_price_pot+total_price_green;
                printf("\n\t\t\tGrand total= = = = = = = = = = = = = = = = = = = = = = = = = = =%.2f\n",grand_total);
                
              
                
                printf("\n\t\t\trecieved amount= = = = = = = = = = = = = = = = = = = = = = = = = = %d\n",recieved_amount);
                
                remaining_amount=recieved_amount-grand_total;
                printf("\n\t\t\t remaining amount = = = = = = = = = = = = = = = = = = = = = = = = = = = = %d\n",remaining_amount);
                int five_thousand_note=remaining_amount/5000;
                remaining_amount%=5000;
                
               int thousand_note = remaining_amount / 1000;
                remaining_amount %= 1000;
                
                int five_hundred_note=remaining_amount/500;
                remaining_amount%=500;

               int hundred_note = remaining_amount / 100;
              remaining_amount %= 100;
              
              
              int fifty_rupees_note=remaining_amount/50;
              remaining_amount%=50;

                int twenty_note = remaining_amount / 20;
                remaining_amount %= 20;
                int ten_note=remaining_amount/10;
                remaining_amount%=10;
                
                int five_note=remaining_amount/5;
                remaining_amount%=5;
                
                int two_note=remaining_amount/2;
                remaining_amount%=2;
                
                int one_note=remaining_amount/1;
                remaining_amount%=1;
                

    int one_notes = remaining_amount;
    
   printf("\n\t\t\t\t5000 notes   =    %d\n",five_thousand_note);
    printf("\n\t\t\t\t1000 notes  =    %d\n", thousand_note);
    printf("\n\t\t\t\t500 notes   =    %d\n",five_hundred_note);
    printf("\n\t\t\t\t100 notes   =    %d\n", hundred_note);
    printf("\n\t\t\t\t50 notes    =    %d\n",fifty_rupees_note);
    printf("\n\t\t\t\t20 notes    =    %d\n", twenty_note);
    printf("\n\t\t\t\t10 notes    =    %d\n",ten_note);
    printf("\n\t\t\t\t5 notes     =    %d\n",five_note);
    printf("\n\t\t\t\t 2 notes    =    %d\n",two_note);
    printf("\n\t\t\t\t 1 notes    =    %d\n ", one_note);

              
                
                  
                  
                
                
                        
                         
 return 0;
}



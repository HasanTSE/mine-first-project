//Dhaka International University
//Project Name : DIU Travel Agency​
//Team Member Name : Md. Hasanul Hoque ; Roll : 20
//            Batch : 55th[Day]

#include<stdio.h>
#include<stdlib.h>


int main()

{
    int processing,transport,visitor,hotel,in_hotel;//variable declaration

    char to[100],from[100];


    printf("\t\t\t\t\t\t\t\t  ***Welcome to DIU travel Agency.***\n");
    printf("\t\t\t\t\t\t\t\t***We are always ready to serve you.***\n");
    printf("\t\t\t\t\t\t\t  ***Let's enjoy the beauty of Bangladesh with us.***\n");


    printf("\n\n  Why you choose us?\n");
    printf("\t   -> We give you 100%% best services.\n");
    printf("\t   -> We give you first class ticket of Air, Train, Bus, Launches.\n");
    printf("\t   -> We give you best shelter.\n");
    printf("\t   -> We give you best food.\n");
    printf("\t   -> We provide services in all over the country.\n");


    printf("\n\n\t\t\t\t\t\t\t  *****Deciding is yours but responsible is ours*****\n");
    printf("\t\t\t\t\t\t\t*****[Hope you will be Happy & your journey also safe]*****\n");

    printf("\n\nPress 1 for proceeding.\n");
    printf("Or, Press 0 for Exit.\n");
    scanf("%d",&processing);

    if(processing==0)
    {
        exit(0);
    }


    if(processing==1)
    {
        printf("Sir, Where from you want to go?\n");
        scanf("%s",&from);





        printf("Sir, Where you want to go?\n");//Here IS THE PROBLEM IF I PUT HERE COX'S Bazar that time it take it but it can't work properly. I can't understand why it happened ?
        scanf("%s",&to);


        printf("How you will go to %s from %s.\n",to,from);

        printf("\n\n\Press 1 for -> Air.\n");
        printf("Press 2 for -> Train.\n");
        printf("Press 3 for -> Bus.\n");
        printf("Press 4 for -> Launch.\n");

        scanf("%d",&transport);

        //////////////////////////--------------

        if(transport==1)/////////Air open
        {
            printf("Ok, Sir we noted your details that you want to go %s by Air \n",to);
            printf("Can you tell us how many people you have to visit %s.\n",to);
            scanf("%d",&visitor);


            printf("Sir, Which hotel you want to stay please select below anyone.");
            printf("\n\n\Press 1 for -> 5 star.\n");
            printf("Press 2 for -> 3 star.\n");
            printf("Press 3 for -> Normal.\n");
            scanf("%d",&hotel);


            if(hotel==1)//5 STAR
            {
                printf("\nThank's for choosing 5 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 20%% off of total cost.\n");
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }



            if(hotel==2)//3 STAR
            {
                printf("\nThank's for choosing 3 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 15%% off of total cost.\n");//15
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


            if(hotel==3)//Normal
            {
                printf("\nThank's for choosing Normal Hotel.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 10%% off of total cost.\n");//10
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


        }//////////Air off


        if(transport==2)/////////Train open
        {
            printf("Ok, Sir we noted your details that you want to go %s by Train \n",to);
            printf("Can you tell us how many people you have to visit %s.\n",to);
            scanf("%d",&visitor);


            printf("Sir, Which hotel you want to stay please select below anyone.");
            printf("\n\n\Press 1 for -> 5 star.\n");
            printf("Press 2 for -> 3 star.\n");
            printf("Press 3 for -> Normal.\n");
            scanf("%d",&hotel);


            if(hotel==1)//5 STAR
            {
                printf("\nThank's for choosing 5 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 20%% off of total cost.\n");
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }



            if(hotel==2)//3 STAR
            {
                printf("\nThank's for choosing 3 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 15%% off of total cost.\n");//15
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


            if(hotel==3)//Normal
            {
                printf("\nThank's for choosing Normal Hotel.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 10%% off of total cost.\n");//10
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


        }//////////Train off


        if(transport==3)/////////Bus open
        {
            printf("Ok, Sir we noted your details that you want to go %s by Bus \n",to);
            printf("Can you tell us how many people you have to visit %s.\n",to);
            scanf("%d",&visitor);


            printf("Sir, Which hotel you want to stay please select below anyone.");
            printf("\n\n\Press 1 for -> 5 star.\n");
            printf("Press 2 for -> 3 star.\n");
            printf("Press 3 for -> Normal.\n");
            scanf("%d",&hotel);


            if(hotel==1)//5 STAR
            {
                printf("\nThank's for choosing 5 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 20%% off of total cost.\n");
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }



            if(hotel==2)//3 STAR
            {
                printf("\nThank's for choosing 3 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 15%% off of total cost.\n");//15
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


            if(hotel==3)//Normal
            {
                printf("\nThank's for choosing Normal Hotel.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 10%% off of total cost.\n");//10
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


        }//////////Bus off



        if(transport==4)/////////Launch open
        {
            printf("Ok, Sir we noted your details that you want to go %s by Launch \n",to);
            printf("Can you tell us how many people you have to visit %s.\n",to);
            scanf("%d",&visitor);


            printf("Sir, Which hotel you want to stay please select below anyone.");
            printf("\n\n\Press 1 for -> 5 star.\n");
            printf("Press 2 for -> 3 star.\n");
            printf("Press 3 for -> Normal.\n");
            scanf("%d",&hotel);


            if(hotel==1)//5 STAR
            {
                printf("\nThank's for choosing 5 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 20%% off of total cost.\n");
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }



            if(hotel==2)//3 STAR
            {
                printf("\nThank's for choosing 3 Star.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 15%% off of total cost.\n");//15
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


            if(hotel==3)//Normal
            {
                printf("\nThank's for choosing Normal Hotel.\n");
                printf("\nHow many day's you want to stay in %s.\n",to,in_hotel);
                scanf("%d",&in_hotel);
                printf("\nOk, Sir we noted your details that you want to spent %d day's in %s.\n",in_hotel,to);

                printf("\n\nCongratulation! Sir, You get 10%% off of total cost.\n");//10
                printf("Sir, For your kind information we also give you a best guide, Who will give you perfect company.\n");
            }


        }//////////Launch off



        printf("\n\n\n\n\t\t\t\t\t\t\t\t     ***Bill.***\n");
        if(processing==1)
        {
            /// Bill open
            if(transport==1) ///4 air
            {


                if(hotel==1)//5 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*5000;
                    printf("\t\t\t\t\t\t\t     Air Rent     : %d X 5000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*10000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 10000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*20/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//5 star close

                if(hotel==2)//3 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*5000;
                    printf("\t\t\t\t\t\t\t     Air Rent     : %d X 5000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*8000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 8000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*15/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//3 star close

                if(hotel==3)//Normal start
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*5000;
                    printf("\t\t\t\t\t\t\t     Air Rent     : %d X 5000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*5000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 5000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*10/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }// Normal close


            }  //air close


            if(transport==2) ///4 Train
            {


                if(hotel==1)//5 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*4000;
                    printf("\t\t\t\t\t\t\t     Train Rent   : %d X 4000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*10000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 10000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*20/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//5 start close

                if(hotel==2)//3 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*4000;
                    printf("\t\t\t\t\t\t\t     Train Rent   : %d X 4000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*8000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 8000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*15/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//3 star close

                if(hotel==3)//Normal start
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*4000;
                    printf("\t\t\t\t\t\t\t     Train Rent   : %d X 4000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*5000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 5000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*10/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }// Normal close


            }  //Train close



            if(transport==3) ///4 Bus
            {


                if(hotel==1)//5 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Bus Rent     : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*10000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 10000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*20/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//5 star close

                if(hotel==2)//3 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Bus Rent     : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*8000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 8000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*15/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//3 star close

                if(hotel==3)//Normal start
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Bus Rent     : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*5000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 5000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*10/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }// Normal close


            }  //Bus close




            if(transport==4) ///4 Launch
            {


                if(hotel==1)//5 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Launch Rent  : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*10000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 10000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*20/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//5 star close

                if(hotel==2)//3 star
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Launch Rent  : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*8000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 8000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*15/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }//3 star close

                if(hotel==3)//Normal start
                {
                    int tansport_bill,hotel_bill,discount,half_total,total_bill;


                    tansport_bill=visitor*2000;
                    printf("\t\t\t\t\t\t\t     Launch Rent  : %d X 2000 = %d\n",visitor,tansport_bill);
                    hotel_bill=in_hotel*5000;
                    printf("\t\t\t\t\t\t\t     Hotel Rent   : %d X 5000 = %d\n",in_hotel,hotel_bill);
                    printf("\t\t\t\t\t\t\t     Guide Charge : 2000\n");
                    discount=(tansport_bill+hotel_bill+2000)*10/100;
                    printf("\t\t\t\t\t\t\t     Discount     : %d\n",discount);
                    printf("\t\t\t\t\t\t       ----------------------------------------\n");
                    half_total=tansport_bill+hotel_bill+2000;
                    total_bill=half_total-discount;
                    printf("\t\t\t\t\t\t         Total Charge     : %d\n",total_bill);
                    printf("\n\n\t\t\t\t\t            -*-*-*-*-*-*Thanks for choosing us-*-*-*-*-*-*\n");
                }// Normal close


            }  //Launch close


        } //Bill close



    }//1st
}




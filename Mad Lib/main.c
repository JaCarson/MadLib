//
//  main.c
//  Mad Lib
//
//  Created by John Carson on 8/15/16.
//  Copyright © 2016 John Carson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
    int main(int argc, const char * argv[]) {
        
        char noun[10];
        char verb[10];
        char adjective[10];
        
        enum Adjective {GROSS, FAST, CRAZY};
        enum Noun {FLAP, MOUNTAIN, HOLE};
        enum Verb {TASTE, INSPECT, EXPLORE};
        
        enum Noun noun_choice;
        enum Verb verb_choice;
        enum Adjective adjective_choice;
        
        int choice;
        
        
        printf("Select a number between 1 and 3 to choose a verb\n");
        
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: verb_choice = EXPLORE;
                break;
            case 2: verb_choice = INSPECT;
                break;
            case 3: verb_choice = TASTE;
                break;
            default:
                break;
                
        }
        
        switch (verb_choice) {
            case EXPLORE: strcpy(verb, "explore");
                break;
            case INSPECT: strcpy(verb, "inspect");
                break;
            case TASTE: strcpy(verb, "taste");
                break;
            default:
                break;
                
                
        }
        
        printf("you chose %s \n", verb);
        
        printf("Select a number between 1 and 3 to choose a Adjective\n");
        
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: adjective_choice = GROSS;
                break;
            case 2: adjective_choice = FAST;
                break;
            case 3: adjective_choice = CRAZY;
                break;
            default:
                break;
                
                
        }
        
        switch (adjective_choice) {
            case GROSS: strcpy(adjective, "gross");
                break;
            case FAST: strcpy(adjective, "fast");
                break;
            case CRAZY: strcpy(adjective, "crazy");
                break;
            default:
                break;
        }
        
        printf("you chose %s \n", adjective);
        
        printf("Select a number between 1 and 3 to choose a noun\n");
      
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: noun_choice = FLAP;
                break;
            case 2: noun_choice = MOUNTAIN;
                break;
            case 3: noun_choice = HOLE;
                break;
            default:
                break;
                
        }
        
        switch (noun_choice) {
            case FLAP: strcpy(noun, "flap");
                break;
            case MOUNTAIN: strcpy(noun, "mountain");
                break;
            case HOLE: strcpy(noun, "hole");
                break;
            default:
                break;
        }
        
        printf("you chose %s \n", noun);
        
        printf("Congratulations, you have chosen to %s the %s in a very %s manner\n", verb, noun, adjective);
        
        
        
        
        
        return 0;
    }
    

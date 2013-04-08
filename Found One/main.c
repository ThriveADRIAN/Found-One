//
//  main.c
//  Found One
//
//  Created by Adrian Bruce Cunanan on 4/8/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    for (int i = 99; i >= 0; i--){
        if(i % 3 == 0){
            printf("%d\n", i);
            if (i % 5 == 0) {
                printf("Found one!\n");
            }
        }
    }
    return 0;
}


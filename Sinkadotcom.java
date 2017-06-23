/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package sinkadotcom;
import java.util.*;
/**
 *
 * @author Sai Saswat
 */
public class Sinkadotcom {

    
    //input from console
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        dotcom a=new dotcom();
        
        int[][] loc={{0,0},{0,1},{0,2},{3,5},{4,5},{5,5},{2,1},{2,2},{2,3}};
        a.setloc(loc);
        
        //b=true;
        int count=0;
        
        while(a.bol)
        {
            int guess=Integer.parseInt(sc.next());
            a.s=guess;
            a.guess();
            
            count++;
        }
        a.sc=count;
        a.score();
    }
    
}
class dotcom
{
    int A[][]=new int[7][7];
    int s=0;
    int ref[][]=new int[9][2];
    boolean bol=true;
    int sc=0;
    void setloc(int B[][])
    {
        
        ref=B;
        for(int i=0;i<=8;i++)
        {
            A[B[i][0]][B[i][1]]=1;
            
        }
        System.out.println("targets hav been set guess now!!");
    }
    void guess()
    {
        int c[]=new int[2];
        c[1]=s%10;
        c[0]=s/10;
        
        if(A[c[0]][c[1]]==1)
        {
            A[c[0]][c[1]]=0;
            int count=9;
            for(int i=0;i<=8;i++)
            {
                if(A[ref[i][0]][ref[i][1]]==0)
                    count--;
            }
            if(count==0)
            {
                System.out.println("over");
                bol=false;
                //score();
            }
            else if(count==6||count==3)
                System.out.println("kill");
            else
                System.out.println("hit");
            
        }
        else
            System.out.println("Miss");
        
    }
    void score()
    {
        System.out.println("Score is 9:"+sc);
        System.exit(0);
    }
    
}
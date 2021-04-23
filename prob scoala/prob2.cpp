#include<iostream>

using namespace std;

int main(){
    int a, b, x, y, c;

    cin >> a >> b;

    if(a % 10 + a%100/10 + a%1000/100 + a%10000/1000 == b % 10 +b%100/10 + b%1000/100 + b%10000/1000){
        c = a/1000*1000 + a%1000/100*100 + b%100/10 * 10 + b % 10;
        cout << c;
    }
    else{
        cin >> x >> y;

        int ux, zx, sx, mx, zmx;
        
        int uy, zy, sy, my, zmy;

        ux = x % 10;
        zx = x%100/10;
        sx = x%1000/100;
        mx = x%10000/1000;
        zmx = x%100000/10000;

        uy = y % 10;
        zy = y%100/10;
        sy = y%1000/100;
        my = y%10000/1000;
        zmy = y%100000/10000;

        int x1 = 1, x2 = 1, x3 = 1, x4 = 1, x5 = 1, t;
        
        if(ux % 2 == 0){
            x1 = ux;
        }
        if(zx % 2 == 0){
            x2 = zx;
        }
        if(sx % 2 == 0){
            x3 = sx;
        }
        if(mx % 2 == 0){
            x4 = mx;
        }
        if(zmx % 2 == 0){
            x5 = zmx;
        }
        
        t = x1 * x2 * x3 * x4 * x5;

        int y1 =1, y2 = 2, y3 = 3, y4 = 4, y5 = 5, v;

        if(uy % 2 == 1){
            y1 = uy;
        }
        if(zy % 2 == 1){
            y2 = zy;
        }
        if(sy % 2 == 1){
            y3 = sy;
        }
        if(my % 2 == 1){
            y4 = my;
        }
        if(zmy % 2 == 1){
            y5 = zmy;
        }

        v = y1 * y2 * y3 * y4 * y5;

        cout << t << endl;
        cout << v << endl;
    }
    return 0;
}
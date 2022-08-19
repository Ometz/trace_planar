/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:18 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2237;
  double t2201;
  double t2202;
  double t2245;
  double t2301;
  double t2266;
  double t2329;
  double t2196;
  double t2324;
  double t2331;
  double t2332;
  double t2339;
  double t2340;
  double t2341;
  double t2317;
  double t2318;
  double t2319;
  double t2320;
  double t2321;
  double t2342;
  double t2359;
  double t2360;
  double t2361;
  double t2267;
  double t2272;
  double t2278;
  double t2408;
  double t2409;
  double t2410;
  double t2411;
  double t2412;
  double t2236;
  double t2246;
  double t2247;
  double t2265;
  double t2279;
  double t2282;
  double t2336;
  double t2343;
  double t2344;
  double t2345;
  double t2346;
  double t2347;
  double t2348;
  double t2349;
  double t2436;
  double t2437;
  double t2432;
  double t2433;
  double t2434;
  double t2362;
  double t2363;
  double t2364;
  double t2365;
  double t2366;
  double t2376;
  double t2378;
  double t2379;
  double t2461;
  double t2458;
  double t2459;
  double t2462;
  double t2472;
  double t2486;
  double t2485;
  double t2487;
  double t2488;
  double t2490;
  double t2491;
  double t2492;
  double t2474;
  double t2477;
  double t2478;
  double t2481;
  double t2482;
  double t2493;
  double t2505;
  double t2506;
  double t2507;
  double t2466;
  double t2467;
  double t2468;
  double t2523;
  double t2524;
  double t2525;
  double t2526;
  double t2527;
  double t2460;
  double t2463;
  double t2464;
  double t2465;
  double t2469;
  double t2470;
  double t2489;
  double t2494;
  double t2495;
  double t2496;
  double t2497;
  double t2498;
  double t2499;
  double t2500;
  double t2547;
  double t2548;
  double t2543;
  double t2544;
  double t2545;
  double t2508;
  double t2509;
  double t2510;
  double t2511;
  double t2512;
  double t2513;
  double t2514;
  double t2515;
  double t2398;
  double t2399;
  double t2403;
  double t2558;
  double t2559;
  double t2560;
  double t2519;
  double t2520;
  double t2521;
  double t2566;
  double t2567;
  double t2568;
  double t2420;
  double t2416;
  double t2417;
  double t2418;
  double t2419;
  double t2421;
  double t2535;
  double t2531;
  double t2532;
  double t2533;
  double t2534;
  double t2536;
  double t2562;
  double t2563;
  double t2564;
  double t2570;
  double t2571;
  double t2572;
  double t2574;
  double t2575;
  double t2577;
  double t2578;
  double t2579;
  double t2581;
  double t2582;
  double t2584;
  double t2585;
  double t2586;
  double t2588;
  double t2589;
  double t2590;
  double t2592;
  double t2593;
  double t2594;
  double t2596;
  double t2597;
  double t2598;
  double t2600;
  double t2601;
  double t2602;
  double t2685;
  double t2686;
  double t2687;
  double t2689;
  double t2690;
  double t2691;
  double t2699;
  double t2700;
  double t2701;
  double t2703;
  double t2704;
  double t2705;
  double t2717;
  double t2718;
  double t2719;
  double t2713;
  double t2714;
  double t2715;
  double t2731;
  double t2732;
  double t2733;
  double t2727;
  double t2728;
  double t2729;
  double t2624;
  double t2625;
  double t2626;
  double t2316;
  double t2322;
  double t2323;
  double t2648;
  double t2649;
  double t2650;
  double t2351;
  double t2352;
  double t2353;
  double t2652;
  double t2653;
  double t2654;
  double t2611;
  double t2612;
  double t2613;
  double t2425;
  double t2426;
  double t2427;
  double t2428;
  double t2413;
  double t2414;
  double t2415;
  double t2632;
  double t2633;
  double t2435;
  double t2438;
  double t2439;
  double t2441;
  double t2442;
  double t2443;
  double t2635;
  double t2636;
  double t2637;
  double t2473;
  double t2483;
  double t2484;
  double t2660;
  double t2661;
  double t2662;
  double t2502;
  double t2503;
  double t2504;
  double t2664;
  double t2665;
  double t2666;
  double t2620;
  double t2621;
  double t2622;
  double t2538;
  double t2539;
  double t2540;
  double t2541;
  double t2528;
  double t2529;
  double t2530;
  double t2643;
  double t2644;
  double t2546;
  double t2549;
  double t2550;
  double t2552;
  double t2553;
  double t2554;
  double t2561;
  double t2569;
  double t2606;
  double t2607;
  double t2608;
  double t2609;
  double t2610;
  double t2614;
  double t2615;
  double t2616;
  double t2617;
  double t2618;
  double t2619;
  double t2623;
  double t2627;
  double t2628;
  double t2629;
  double t2630;
  double t2631;
  double t2634;
  double t2638;
  double t2639;
  double t2640;
  double t2641;
  double t2642;
  double t2645;
  double t2646;
  double t2647;
  double t2651;
  double t2655;
  double t2656;
  double t2657;
  double t2658;
  double t2659;
  double t2663;
  double t2667;
  double t2668;
  double t2669;
  double t2670;
  double t2673;
  double t2674;
  double t2675;
  double t2676;
  double t2677;
  double t2679;
  double t2680;
  double t2681;
  double t2682;
  double t2683;
  double t2688;
  double t2692;
  double t2693;
  double t2695;
  double t2696;
  double t2697;
  double t2702;
  double t2706;
  double t2707;
  double t2709;
  double t2710;
  double t2711;
  double t2716;
  double t2720;
  double t2721;
  double t2723;
  double t2724;
  double t2725;
  double t2730;
  double t2734;
  double t2735;
  double t2737;
  double t2738;
  double t2739;
  double t2672;
  double t2678;
  double t2684;
  double t2694;
  double t2698;
  double t2708;
  double t2712;
  double t2722;
  double t2726;
  double t2736;
  double t2740;
  double t2741;
  double t2782;
  double t2783;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2788;
  double t2789;
  double t2790;
  double t2791;
  double t2792;
  double t2793;
  double t2750;
  double t2751;
  double t2752;
  double t2753;
  double t2754;
  double t2755;
  double t2407;
  double t2424;
  double t2429;
  double t2440;
  double t2452;
  double t2456;
  double t2762;
  double t2763;
  double t2764;
  double t2765;
  double t2766;
  double t2767;
  double t2522;
  double t2537;
  double t2542;
  double t2551;
  double t2555;
  double t2556;
  double t2745;
  double t2746;
  double t2747;
  double t2748;
  double t2300;
  double t2350;
  double t2387;
  double t2388;
  double t2757;
  double t2758;
  double t2759;
  double t2760;
  double t2471;
  double t2501;
  double t2516;
  double t2517;
  t2237 = Cos(var1[3]);
  t2201 = Cos(var1[5]);
  t2202 = Sin(var1[3]);
  t2245 = Sin(var1[5]);
  t2301 = Cos(var1[7]);
  t2266 = Sin(var1[2]);
  t2329 = Sin(var1[7]);
  t2196 = Cos(var1[2]);
  t2324 = -1.*t2301*t2245;
  t2331 = -1.*t2201*t2329;
  t2332 = t2324 + t2331;
  t2339 = t2201*t2301;
  t2340 = -1.*t2245*t2329;
  t2341 = t2339 + t2340;
  t2317 = -1.*t2301;
  t2318 = 1. + t2317;
  t2319 = -0.8*t2318;
  t2320 = -0.8*t2301;
  t2321 = t2319 + t2320;
  t2342 = t2237*t2341;
  t2359 = t2301*t2245;
  t2360 = t2201*t2329;
  t2361 = t2359 + t2360;
  t2267 = t2237*t2201;
  t2272 = -1.*t2202*t2245;
  t2278 = t2267 + t2272;
  t2408 = -1.*t2201;
  t2409 = 1. + t2408;
  t2410 = -0.4*t2409;
  t2411 = -0.51*t2201;
  t2412 = t2410 + t2411;
  t2236 = -1.*t2201*t2202;
  t2246 = -1.*t2237*t2245;
  t2247 = t2236 + t2246;
  t2265 = t2196*t2247;
  t2279 = -1.*t2266*t2278;
  t2282 = t2265 + t2279;
  t2336 = t2202*t2332;
  t2343 = t2336 + t2342;
  t2344 = -1.*t2266*t2343;
  t2345 = t2237*t2332;
  t2346 = -1.*t2202*t2341;
  t2347 = t2345 + t2346;
  t2348 = t2196*t2347;
  t2349 = t2344 + t2348;
  t2436 = t2201*t2321;
  t2437 = t2410 + t2436;
  t2432 = 0.4*t2245;
  t2433 = t2321*t2245;
  t2434 = t2432 + t2433;
  t2362 = -1.*t2202*t2361;
  t2363 = t2362 + t2342;
  t2364 = t2196*t2363;
  t2365 = t2237*t2361;
  t2366 = t2202*t2341;
  t2376 = t2365 + t2366;
  t2378 = -1.*t2266*t2376;
  t2379 = t2364 + t2378;
  t2461 = Cos(var1[4]);
  t2458 = Cos(var1[6]);
  t2459 = Sin(var1[4]);
  t2462 = Sin(var1[6]);
  t2472 = Cos(var1[8]);
  t2486 = Sin(var1[8]);
  t2485 = -1.*t2472*t2462;
  t2487 = -1.*t2458*t2486;
  t2488 = t2485 + t2487;
  t2490 = t2458*t2472;
  t2491 = -1.*t2462*t2486;
  t2492 = t2490 + t2491;
  t2474 = -1.*t2472;
  t2477 = 1. + t2474;
  t2478 = -0.8*t2477;
  t2481 = -0.8*t2472;
  t2482 = t2478 + t2481;
  t2493 = t2461*t2492;
  t2505 = t2472*t2462;
  t2506 = t2458*t2486;
  t2507 = t2505 + t2506;
  t2466 = t2461*t2458;
  t2467 = -1.*t2459*t2462;
  t2468 = t2466 + t2467;
  t2523 = -1.*t2458;
  t2524 = 1. + t2523;
  t2525 = -0.4*t2524;
  t2526 = -0.51*t2458;
  t2527 = t2525 + t2526;
  t2460 = -1.*t2458*t2459;
  t2463 = -1.*t2461*t2462;
  t2464 = t2460 + t2463;
  t2465 = t2196*t2464;
  t2469 = -1.*t2266*t2468;
  t2470 = t2465 + t2469;
  t2489 = t2459*t2488;
  t2494 = t2489 + t2493;
  t2495 = -1.*t2266*t2494;
  t2496 = t2461*t2488;
  t2497 = -1.*t2459*t2492;
  t2498 = t2496 + t2497;
  t2499 = t2196*t2498;
  t2500 = t2495 + t2499;
  t2547 = t2458*t2482;
  t2548 = t2525 + t2547;
  t2543 = 0.4*t2462;
  t2544 = t2482*t2462;
  t2545 = t2543 + t2544;
  t2508 = -1.*t2459*t2507;
  t2509 = t2508 + t2493;
  t2510 = t2196*t2509;
  t2511 = t2461*t2507;
  t2512 = t2459*t2492;
  t2513 = t2511 + t2512;
  t2514 = -1.*t2266*t2513;
  t2515 = t2510 + t2514;
  t2398 = -1.*t2237*t2266;
  t2399 = -1.*t2196*t2202;
  t2403 = t2398 + t2399;
  t2558 = t2196*t2237;
  t2559 = -1.*t2266*t2202;
  t2560 = t2558 + t2559;
  t2519 = -1.*t2461*t2266;
  t2520 = -1.*t2196*t2459;
  t2521 = t2519 + t2520;
  t2566 = t2196*t2461;
  t2567 = -1.*t2266*t2459;
  t2568 = t2566 + t2567;
  t2420 = t2196*t2278;
  t2416 = t2201*t2202;
  t2417 = t2237*t2245;
  t2418 = t2416 + t2417;
  t2419 = -1.*t2266*t2418;
  t2421 = t2419 + t2420;
  t2535 = t2196*t2468;
  t2531 = t2458*t2459;
  t2532 = t2461*t2462;
  t2533 = t2531 + t2532;
  t2534 = -1.*t2266*t2533;
  t2536 = t2534 + t2535;
  t2562 = t2237*t2266;
  t2563 = t2196*t2202;
  t2564 = t2562 + t2563;
  t2570 = t2461*t2266;
  t2571 = t2196*t2459;
  t2572 = t2570 + t2571;
  t2574 = t2266*t2247;
  t2575 = t2574 + t2420;
  t2577 = t2196*t2418;
  t2578 = t2266*t2278;
  t2579 = t2577 + t2578;
  t2581 = t2266*t2464;
  t2582 = t2581 + t2535;
  t2584 = t2196*t2533;
  t2585 = t2266*t2468;
  t2586 = t2584 + t2585;
  t2588 = t2196*t2343;
  t2589 = t2266*t2347;
  t2590 = t2588 + t2589;
  t2592 = t2266*t2363;
  t2593 = t2196*t2376;
  t2594 = t2592 + t2593;
  t2596 = t2196*t2494;
  t2597 = t2266*t2498;
  t2598 = t2596 + t2597;
  t2600 = t2266*t2509;
  t2601 = t2196*t2513;
  t2602 = t2600 + t2601;
  t2685 = t2412*t2202;
  t2686 = -0.11*t2237*t2245;
  t2687 = t2685 + t2686;
  t2689 = t2237*t2412;
  t2690 = 0.11*t2202*t2245;
  t2691 = t2689 + t2690;
  t2699 = t2527*t2459;
  t2700 = -0.11*t2461*t2462;
  t2701 = t2699 + t2700;
  t2703 = t2461*t2527;
  t2704 = 0.11*t2459*t2462;
  t2705 = t2703 + t2704;
  t2717 = t2237*t2437;
  t2718 = -1.*t2202*t2434;
  t2719 = t2717 + t2718;
  t2713 = t2437*t2202;
  t2714 = t2237*t2434;
  t2715 = t2713 + t2714;
  t2731 = t2461*t2548;
  t2732 = -1.*t2459*t2545;
  t2733 = t2731 + t2732;
  t2727 = t2548*t2459;
  t2728 = t2461*t2545;
  t2729 = t2727 + t2728;
  t2624 = -1.*t2266*t2247;
  t2625 = -1.*t2196*t2278;
  t2626 = t2624 + t2625;
  t2316 = 0.4*t2301;
  t2322 = t2321*t2301;
  t2323 = t2316 + t2322;
  t2648 = -1.*t2196*t2343;
  t2649 = -1.*t2266*t2347;
  t2650 = t2648 + t2649;
  t2351 = 0.4*t2329;
  t2352 = t2321*t2329;
  t2353 = t2351 + t2352;
  t2652 = -1.*t2266*t2363;
  t2653 = -1.*t2196*t2376;
  t2654 = t2652 + t2653;
  t2611 = -1.*t2196*t2237;
  t2612 = t2266*t2202;
  t2613 = t2611 + t2612;
  t2425 = t2412*t2201;
  t2426 = Power(t2245,2);
  t2427 = -0.11*t2426;
  t2428 = t2425 + t2427;
  t2413 = t2412*t2245;
  t2414 = 0.11*t2201*t2245;
  t2415 = t2413 + t2414;
  t2632 = -1.*t2196*t2418;
  t2633 = t2632 + t2279;
  t2435 = t2434*t2361;
  t2438 = t2437*t2341;
  t2439 = t2435 + t2438;
  t2441 = -1.*t2437*t2332;
  t2442 = -1.*t2434*t2341;
  t2443 = t2441 + t2442;
  t2635 = -1.*t2266*t2464;
  t2636 = -1.*t2196*t2468;
  t2637 = t2635 + t2636;
  t2473 = 0.4*t2472;
  t2483 = t2482*t2472;
  t2484 = t2473 + t2483;
  t2660 = -1.*t2196*t2494;
  t2661 = -1.*t2266*t2498;
  t2662 = t2660 + t2661;
  t2502 = 0.4*t2486;
  t2503 = t2482*t2486;
  t2504 = t2502 + t2503;
  t2664 = -1.*t2266*t2509;
  t2665 = -1.*t2196*t2513;
  t2666 = t2664 + t2665;
  t2620 = -1.*t2196*t2461;
  t2621 = t2266*t2459;
  t2622 = t2620 + t2621;
  t2538 = t2527*t2458;
  t2539 = Power(t2462,2);
  t2540 = -0.11*t2539;
  t2541 = t2538 + t2540;
  t2528 = t2527*t2462;
  t2529 = 0.11*t2458*t2462;
  t2530 = t2528 + t2529;
  t2643 = -1.*t2196*t2533;
  t2644 = t2643 + t2469;
  t2546 = t2545*t2507;
  t2549 = t2548*t2492;
  t2550 = t2546 + t2549;
  t2552 = -1.*t2548*t2488;
  t2553 = -1.*t2545*t2492;
  t2554 = t2552 + t2553;
  t2561 = 13.6*t2403*t2560;
  t2569 = 13.6*t2521*t2568;
  t2606 = Power(t2403,2);
  t2607 = 6.8*t2606;
  t2608 = 6.8*t2403*t2564;
  t2609 = Power(t2560,2);
  t2610 = 6.8*t2609;
  t2614 = 6.8*t2560*t2613;
  t2615 = Power(t2521,2);
  t2616 = 6.8*t2615;
  t2617 = 6.8*t2521*t2572;
  t2618 = Power(t2568,2);
  t2619 = 6.8*t2618;
  t2623 = 6.8*t2568*t2622;
  t2627 = 6.8*t2626*t2575;
  t2628 = Power(t2421,2);
  t2629 = 6.8*t2628;
  t2630 = Power(t2282,2);
  t2631 = 6.8*t2630;
  t2634 = 6.8*t2633*t2579;
  t2638 = 6.8*t2637*t2582;
  t2639 = Power(t2536,2);
  t2640 = 6.8*t2639;
  t2641 = Power(t2470,2);
  t2642 = 6.8*t2641;
  t2645 = 6.8*t2644*t2586;
  t2646 = Power(t2349,2);
  t2647 = 0.3*t2646;
  t2651 = 0.3*t2650*t2590;
  t2655 = 0.3*t2654*t2594;
  t2656 = Power(t2379,2);
  t2657 = 0.3*t2656;
  t2658 = Power(t2500,2);
  t2659 = 0.3*t2658;
  t2663 = 0.3*t2662*t2598;
  t2667 = 0.3*t2666*t2602;
  t2668 = Power(t2515,2);
  t2669 = 0.3*t2668;
  t2670 = t2607 + t2608 + t2610 + t2614 + t2616 + t2617 + t2619 + t2623 + t2627 + t2629 + t2631 + t2634 + t2638 + t2640 + t2642 + t2645 + t2647 + t2651 + t2655 + t2657 + t2659 + t2663 + t2667 + t2669;
  t2673 = Power(t2237,2);
  t2674 = -0.11*t2673;
  t2675 = Power(t2202,2);
  t2676 = -0.11*t2675;
  t2677 = t2674 + t2676;
  t2679 = Power(t2461,2);
  t2680 = -0.11*t2679;
  t2681 = Power(t2459,2);
  t2682 = -0.11*t2681;
  t2683 = t2680 + t2682;
  t2688 = -1.*t2687*t2278;
  t2692 = -1.*t2247*t2691;
  t2693 = t2688 + t2692;
  t2695 = t2687*t2418;
  t2696 = t2278*t2691;
  t2697 = t2695 + t2696;
  t2702 = -1.*t2701*t2468;
  t2706 = -1.*t2464*t2705;
  t2707 = t2702 + t2706;
  t2709 = t2701*t2533;
  t2710 = t2468*t2705;
  t2711 = t2709 + t2710;
  t2716 = -1.*t2715*t2343;
  t2720 = -1.*t2719*t2347;
  t2721 = t2716 + t2720;
  t2723 = t2719*t2363;
  t2724 = t2715*t2376;
  t2725 = t2723 + t2724;
  t2730 = -1.*t2729*t2494;
  t2734 = -1.*t2733*t2498;
  t2735 = t2730 + t2734;
  t2737 = t2733*t2509;
  t2738 = t2729*t2513;
  t2739 = t2737 + t2738;
  t2672 = -2.88*t2266;
  t2678 = 6.8*t2403*t2677;
  t2684 = 6.8*t2521*t2683;
  t2694 = 6.8*t2421*t2693;
  t2698 = 6.8*t2282*t2697;
  t2708 = 6.8*t2536*t2707;
  t2712 = 6.8*t2470*t2711;
  t2722 = 0.3*t2721*t2379;
  t2726 = 0.3*t2349*t2725;
  t2736 = 0.3*t2735*t2515;
  t2740 = 0.3*t2500*t2739;
  t2741 = t2672 + t2678 + t2684 + t2694 + t2698 + t2708 + t2712 + t2722 + t2726 + t2736 + t2740;
  t2782 = -2.88*t2196;
  t2783 = 6.8*t2613*t2677;
  t2784 = 6.8*t2622*t2683;
  t2785 = 6.8*t2633*t2693;
  t2786 = 6.8*t2626*t2697;
  t2787 = 6.8*t2644*t2707;
  t2788 = 6.8*t2637*t2711;
  t2789 = 0.3*t2721*t2654;
  t2790 = 0.3*t2650*t2725;
  t2791 = 0.3*t2735*t2666;
  t2792 = 0.3*t2662*t2739;
  t2793 = t2782 + t2783 + t2784 + t2785 + t2786 + t2787 + t2788 + t2789 + t2790 + t2791 + t2792;
  t2750 = -0.748*t2613;
  t2751 = 6.8*t2428*t2626;
  t2752 = 6.8*t2415*t2633;
  t2753 = 0.3*t2439*t2650;
  t2754 = 0.3*t2443*t2654;
  t2755 = t2750 + t2751 + t2752 + t2753 + t2754;
  t2407 = -0.748*t2403;
  t2424 = 6.8*t2415*t2421;
  t2429 = 6.8*t2428*t2282;
  t2440 = 0.3*t2439*t2349;
  t2452 = 0.3*t2443*t2379;
  t2456 = t2407 + t2424 + t2429 + t2440 + t2452;
  t2762 = -0.748*t2622;
  t2763 = 6.8*t2541*t2637;
  t2764 = 6.8*t2530*t2644;
  t2765 = 0.3*t2550*t2662;
  t2766 = 0.3*t2554*t2666;
  t2767 = t2762 + t2763 + t2764 + t2765 + t2766;
  t2522 = -0.748*t2521;
  t2537 = 6.8*t2530*t2536;
  t2542 = 6.8*t2541*t2470;
  t2551 = 0.3*t2550*t2500;
  t2555 = 0.3*t2554*t2515;
  t2556 = t2522 + t2537 + t2542 + t2551 + t2555;
  t2745 = -0.748*t2626;
  t2746 = 0.3*t2323*t2650;
  t2747 = 0.3*t2353*t2654;
  t2748 = t2745 + t2746 + t2747;
  t2300 = -0.748*t2282;
  t2350 = 0.3*t2323*t2349;
  t2387 = 0.3*t2353*t2379;
  t2388 = t2300 + t2350 + t2387;
  t2757 = -0.748*t2637;
  t2758 = 0.3*t2484*t2662;
  t2759 = 0.3*t2504*t2666;
  t2760 = t2757 + t2758 + t2759;
  t2471 = -0.748*t2470;
  t2501 = 0.3*t2484*t2500;
  t2516 = 0.3*t2504*t2515;
  t2517 = t2471 + t2501 + t2516;
  p_output1[0]=var2[2]*(-0.5*(t2561 + 13.6*t2560*t2564 + t2569 + 13.6*t2568*t2572 + 13.6*t2282*t2575 + 13.6*t2421*t2579 + 13.6*t2470*t2582 + 13.6*t2536*t2586 + 0.6*t2349*t2590 + 0.6*t2379*t2594 + 0.6*t2500*t2598 + 0.6*t2515*t2602)*var2[0] - 0.5*t2670*var2[1] - 0.5*t2741*var2[2] - 0.5*t2456*var2[3] - 0.5*t2556*var2[4] - 0.5*t2388*var2[5] - 0.5*t2517*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t2670*var2[0] - 0.5*(t2561 + t2569 + 13.6*t2403*t2613 + 13.6*t2521*t2622 + 13.6*t2282*t2626 + 13.6*t2421*t2633 + 13.6*t2470*t2637 + 13.6*t2536*t2644 + 0.6*t2349*t2650 + 0.6*t2379*t2654 + 0.6*t2500*t2662 + 0.6*t2515*t2666)*var2[1] - 0.5*t2793*var2[2] - 0.5*t2755*var2[3] - 0.5*t2767*var2[4] - 0.5*t2748*var2[5] - 0.5*t2760*var2[6]);
  p_output1[2]=(-0.5*t2741*var2[0] - 0.5*t2793*var2[1])*var2[2];
  p_output1[3]=(-0.5*t2456*var2[0] - 0.5*t2755*var2[1])*var2[2];
  p_output1[4]=(-0.5*t2556*var2[0] - 0.5*t2767*var2[1])*var2[2];
  p_output1[5]=(-0.5*t2388*var2[0] - 0.5*t2748*var2[1])*var2[2];
  p_output1[6]=(-0.5*t2517*var2[0] - 0.5*t2760*var2[1])*var2[2];
  p_output1[7]=0;
  p_output1[8]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec3_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec3_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

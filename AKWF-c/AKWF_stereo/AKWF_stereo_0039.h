/* Adventure Kid Waveforms (AKWF) converted for use with Teensy Audio Library 
*  
*  Adventure Kid Waveforms(AKWF) Open waveforms library
*  https://www.adventurekid.se/akrt/waveforms/adventure-kid-waveforms/
*  
*  This code is in the public domain, CC0 1.0 Universal (CC0 1.0)
*  https://creativecommons.org/publicdomain/zero/1.0/
*
*  Converted by Brad Roy, https://github.com/prosper00
*/

/* AKWF_stereo_0039 256 samples
                                                                                                                        
  +-----------------------------------------------------------------------------------------------------------------+   
  |     ***     ****                                                                                                |   
  |    **          ***                                                                                              |   
  |   **             ****              ********                                                                     |   
  |  **                 ***         ****      *****                                                                 |   
  | **                    ***********              ***                                                              |   
  |**                                                 ***                                                           |   
  |*                                                     ***                                                        |   
  |                                                        *****                                                    |   
  |                                                            *******                                             *|   
  |                                                                  *********                                    **|   
  |                                                                          ****                                 * |   
  |                                                                             ***                              *  |   
  |                                                                               ***                          **   |   
  |                                                                                 **             *          **    |   
  |                                                                                   ***     ****************      |   
  +-----------------------------------------------------------------------------------------------------------------+   
                                                                                                                        
                                                                                                                        
*/


const uint16_t AKWF_stereo_0039 [] = {
33055, 38656, 35269, 41946, 37732, 40650, 40045, 41211, 42368, 40466, 44591, 40577, 46805, 39843, 48894, 39637,
50920, 38907, 52783, 38590, 54540, 37908, 56103, 37435, 57547, 36729, 58818, 36187, 59978, 35552, 60990, 34997,
61896, 34395, 62672, 33797, 63359, 33222, 63950, 32615, 64476, 32060, 64896, 31418, 65200, 30848, 65396, 30170,
65504, 29555, 65535, 28826, 65491, 28191, 65353, 27471, 65105, 26867, 64757, 26207, 64324, 25637, 63848, 25009,
63338, 24470, 62816, 23930, 62267, 23479, 61687, 23045, 61057, 22693, 60390, 22386, 59675, 22194, 58922, 22105,
58127, 22131, 57300, 22290, 56454, 22581, 55603, 23044, 54751, 23679, 53900, 24525, 53060, 25543, 52246, 26712,
51457, 27953, 50683, 29288, 49935, 30683, 49213, 32168, 48535, 33740, 47900, 35437, 47318, 37220, 46802, 39082,
46351, 40977, 45952, 42884, 45600, 44781, 45305, 46656, 45067, 48498, 44878, 50315, 44727, 52090, 44604, 53824,
44510, 55498, 44436, 57084, 44380, 58571, 44350, 59926, 44371, 61135, 44453, 62203, 44604, 63137, 44848, 63931,
45171, 64585, 45555, 65084, 45982, 65414, 46448, 65535, 46949, 65406, 47490, 65005, 48055, 64349, 48638, 63469,
49234, 62379, 49830, 61104, 50425, 59655, 51001, 58030, 51534, 56234, 52007, 54286, 52393, 52208, 52673, 50010,
52840, 47729, 52897, 45385, 52879, 42996, 52815, 40575, 52710, 38140, 52557, 35732, 52378, 33367, 52192, 31036,
52010, 28753, 51812, 26508, 51571, 24325, 51288, 22208, 50967, 20218, 50615, 18427, 50231, 16745, 49817, 15097,
49376, 13470, 48912, 11913, 48420, 10450, 47912,  9118, 47397,  7971, 46862,  7043, 46315,  6344, 45758,  5866,
45194,  5584, 44618,  5458, 44025,  5478, 43420,  5617, 42822,  5858, 42241,  6188, 41658,  6610, 41055,  7103,
40436,  7658, 39805,  8279, 39161,  8957, 38501,  9661, 37825, 10381, 37140, 11114, 36481, 11855, 35867, 12640,
35298, 13509, 34756, 14454, 34220, 15472, 33697, 16559, 33197, 17685, 32720, 18810, 32261, 19918, 31812, 20998,
31360, 22052, 30913, 23089, 30473, 24129, 30036, 25157, 29598, 26145, 29172, 27061, 28777, 27898, 28434, 28665,
28135, 29374, 27880, 30056, 27650, 30698, 27444, 31310, 27253, 31937, 27069, 32612, 26888, 33387, 26729, 34288,
26611, 35294, 26526, 36382, 26468, 37525, 26421, 38714, 26396, 39927, 26380, 41162, 26347, 42414, 26256, 43652,
26081, 44841, 25838, 45895, 25535, 46767, 25192, 47465, 24820, 47992, 24406, 48352, 23943, 48570, 23425, 48687,
22866, 48748, 22267, 48762, 21640, 48708, 20990, 48576, 20330, 48362, 19668, 48076, 19004, 47741, 18307, 47349,
17522, 46843, 16654, 46204, 15732, 45462, 14771, 44626, 13778, 43687, 12767, 42614, 11745, 41362, 10721, 39936,
 9700, 38354,  8678, 36641,  7649, 34813,  6617, 32903,  5608, 30937,  4655, 28949,  3768, 26975,  2977, 25044,
 2294, 23187,  1737, 21463,  1326, 19938,   979, 18553,   685, 17338,   457, 16273,   294, 15357,   213, 14564,
  218, 13878,   301, 13268,   456, 12717,   710, 12229,  1041, 11829,  1435, 11540,  1871, 11379,  2365, 11362,
 2926, 11462,  3493, 11711,  4024, 12102,  4516, 12678,  4963, 13379,  5375, 14232,  5742, 15180,  6035, 16288,
 6239, 17516,  6349, 18933,  6365, 20431,  6285, 22061,  6117, 23733,  5870, 25501,  5559, 27227,  5173, 28921,
 4757, 30506,  4317, 32013,  3888, 33409,  3471, 34703,  3085, 35904,  2739, 36974,  2459, 37971,  2258, 38824,
 2159, 39677,  2187, 40398,  2351, 41153,  2630, 41732,  3013, 42408,  3499, 42892,  4074, 43489,  4747, 43834,
 5493, 44280,  6322, 44423,  7188, 44669,  8199, 44583,  9347, 44611, 10669, 44367, 12100, 44275, 13692, 44002,
15365, 43846, 17194, 43571, 19105, 43303, 21200, 43041, 23356, 42586, 25674, 42458, 27991, 41730, 30473, 42227,
};

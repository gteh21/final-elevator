#define SAMPLESIZE 256
//SIZE_OF_BUFFER = SIZE_OF_SAMPLE * freqmultiplier of slowest note;
uint8_t sine[] = {
		   7,    7,    7,    7,    8,    8,    8,    9,
		   9,   10,   11,   11,   12,   13,   14,   15,
		  16,   17,   18,   19,   20,   22,   23,   25,
		  26,   28,   29,   31,   33,   35,   36,   38,
		  40,   42,   44,   46,   48,   51,   53,   55,
		  57,   60,   62,   64,   67,   69,   72,   74,
		  77,   79,   82,   84,   87,   90,   92,   95,
		  98,  100,  103,  106,  109,  111,  114,  117,
		 120,  122,  125,  128,  131,  133,  136,  139,
		 141,  144,  147,  149,  152,  155,  157,  160,
		 162,  165,  167,  170,  172,  175,  177,  179,
		 181,  184,  186,  188,  190,  192,  194,  196,
		 198,  200,  202,  204,  205,  207,  209,  210,
		 212,  213,  215,  216,  217,  218,  220,  221,
		 222,  223,  224,  224,  225,  226,  226,  227,
		 228,  228,  228,  229,  229,  229,  229,  229,
		 229,  229,  229,  229,  229,  228,  228,  228,
		 227,  226,  226,  225,  224,  224,  223,  222,
		 221,  220,  218,  217,  216,  215,  213,  212,
		 210,  209,  207,  205,  204,  202,  200,  198,
		 196,  194,  192,  190,  188,  186,  184,  181,
		 179,  177,  175,  172,  170,  167,  165,  162,
		 160,  157,  155,  152,  149,  147,  144,  141,
		 139,  136,  133,  131,  128,  125,  122,  120,
		 117,  114,  111,  109,  106,  103,  100,   98,
		  95,   92,   90,   87,   84,   82,   79,   77,
		  74,   72,   69,   67,   64,   62,   60,   57,
		  55,   53,   51,   48,   46,   44,   42,   40,
		  38,   36,   35,   33,   31,   29,   28,   26,
		  25,   23,   22,   20,   19,   18,   17,   16,
		  15,   14,   13,   12,   11,   11,   10,    9,
		   9,    8,    8,    8,    7,    7,    7,    7};


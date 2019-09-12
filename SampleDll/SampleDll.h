

#ifdef SAMPLEDLL_EXPORTS
#define SAMPLEDLL_EXPORTS __declspec(dllexport)
#else
#define SAMPLEDLL_EXPORTS __declspec(dllimport)
#endif


extern "C"
{
	SAMPLEDLL_EXPORTS int SampleFunction1();
}
#ifndef NMEWebView
	#define NMEWebView
	
	namespace arcademonk {
		void init(value _onDestroyedCallback, value _onURLChangingCallback, bool withPopup);
		void navigate(const char *url);
		void destroy();
	}
#endif
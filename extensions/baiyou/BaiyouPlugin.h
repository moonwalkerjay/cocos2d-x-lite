//
//  ProjectManifestReader.hpp
//  cocos2d_libs
//
//  Created by gumin on 2016/11/22.
//
//

#ifndef ProjectManifestReader_hpp
#define ProjectManifestReader_hpp

#include <stdio.h>
#include <string>
#include "base/CCRef.h"
#include "cocos2d.h"

namespace baiyou {
    class CC_DLL BaiyouPlugin : public cocos2d::Ref{
    public:
            virtual ~BaiyouPlugin();
            static BaiyouPlugin* getInstance();
            static bool GetAnySDKUserInitFinished();
            static void SetAnySDKUserInitFinished(bool finished);
            virtual std::string getProperty(const std::string& key) const;
            virtual void restart() const;
            void openURL(const std::string& url) const;
            void MessageBox(const std::string& title,const std::string& msg) const;
            virtual std::string getUUID() const;
            virtual bool init();
            virtual std::string getBundleId() const;
            virtual std::string getBundleVersion() const;
            virtual std::string getDeviceInfo() const;
            virtual void setIdleTimerDisabled(bool) const;
            virtual void scheduleLocalNotification(const std::string& title,const std::string& content,int delay) const;
            virtual void unScheduleAllLocalNotification() const;
    protected:
        static BaiyouPlugin* s_sharedBaiyouPlugin;
    };
}

#endif /* ProjectManifestReader_hpp */

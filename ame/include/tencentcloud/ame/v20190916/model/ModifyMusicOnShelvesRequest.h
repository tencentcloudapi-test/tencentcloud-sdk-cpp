/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_MODIFYMUSICONSHELVESREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_MODIFYMUSICONSHELVESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/MusicDetailInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * ModifyMusicOnShelves请求参数结构体
                */
                class ModifyMusicOnShelvesRequest : public AbstractModel
                {
                public:
                    ModifyMusicOnShelvesRequest();
                    ~ModifyMusicOnShelvesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return MusicDetailInfos 无
                     */
                    MusicDetailInfo GetMusicDetailInfos() const;

                    /**
                     * 设置无
                     * @param MusicDetailInfos 无
                     */
                    void SetMusicDetailInfos(const MusicDetailInfo& _musicDetailInfos);

                    /**
                     * 判断参数 MusicDetailInfos 是否已赋值
                     * @return MusicDetailInfos 是否已赋值
                     */
                    bool MusicDetailInfosHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    MusicDetailInfo m_musicDetailInfos;
                    bool m_musicDetailInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MODIFYMUSICONSHELVESREQUEST_H_

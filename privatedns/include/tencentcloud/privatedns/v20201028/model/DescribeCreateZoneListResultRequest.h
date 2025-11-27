/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {

                /**
                * DescribeCreateZoneListResult请求参数结构体
                */
                class DescribeCreateZoneListResultRequest : public AbstractModel
                {
                public:
                    DescribeCreateZoneListResultRequest();
                    ~DescribeCreateZoneListResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域域名数组，域名格式必须是标准的TLD
                     * @return Domains 私有域域名数组，域名格式必须是标准的TLD
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置私有域域名数组，域名格式必须是标准的TLD
                     * @param _domains 私有域域名数组，域名格式必须是标准的TLD
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * 私有域域名数组，域名格式必须是标准的TLD
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTREQUEST_H_

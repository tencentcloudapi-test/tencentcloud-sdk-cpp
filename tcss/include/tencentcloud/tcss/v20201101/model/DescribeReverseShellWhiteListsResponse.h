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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ReverseShellWhiteListBaseInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeReverseShellWhiteLists返回参数结构体
                */
                class DescribeReverseShellWhiteListsResponse : public AbstractModel
                {
                public:
                    DescribeReverseShellWhiteListsResponse();
                    ~DescribeReverseShellWhiteListsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件总数量
                     * @return TotalCount 事件总数量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取白名单信息列表
                     * @return WhiteListSet 白名单信息列表
                     */
                    std::vector<ReverseShellWhiteListBaseInfo> GetWhiteListSet() const;

                    /**
                     * 判断参数 WhiteListSet 是否已赋值
                     * @return WhiteListSet 是否已赋值
                     */
                    bool WhiteListSetHasBeenSet() const;

                private:

                    /**
                     * 事件总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 白名单信息列表
                     */
                    std::vector<ReverseShellWhiteListBaseInfo> m_whiteListSet;
                    bool m_whiteListSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEREVERSESHELLWHITELISTSRESPONSE_H_

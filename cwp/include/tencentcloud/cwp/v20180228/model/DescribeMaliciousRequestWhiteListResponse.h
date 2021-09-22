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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMALICIOUSREQUESTWHITELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMALICIOUSREQUESTWHITELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MaliciousRequestWhiteListInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMaliciousRequestWhiteList返回参数结构体
                */
                class DescribeMaliciousRequestWhiteListResponse : public AbstractModel
                {
                public:
                    DescribeMaliciousRequestWhiteListResponse();
                    ~DescribeMaliciousRequestWhiteListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 白名单信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MaliciousRequestWhiteListInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取分页查询记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 分页查询记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 白名单信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MaliciousRequestWhiteListInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 分页查询记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMALICIOUSREQUESTWHITELISTRESPONSE_H_

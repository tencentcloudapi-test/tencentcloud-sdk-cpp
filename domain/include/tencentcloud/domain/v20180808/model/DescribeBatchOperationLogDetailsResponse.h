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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBATCHOPERATIONLOGDETAILSRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBATCHOPERATIONLOGDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/DomainBatchDetailSet.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeBatchOperationLogDetails返回参数结构体
                */
                class DescribeBatchOperationLogDetailsResponse : public AbstractModel
                {
                public:
                    DescribeBatchOperationLogDetailsResponse();
                    ~DescribeBatchOperationLogDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取总数量。
                     * @return TotalCount 总数量。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainBatchDetailSet 日志详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DomainBatchDetailSet> GetDomainBatchDetailSet() const;

                    /**
                     * 判断参数 DomainBatchDetailSet 是否已赋值
                     * @return DomainBatchDetailSet 是否已赋值
                     */
                    bool DomainBatchDetailSetHasBeenSet() const;

                private:

                    /**
                     * 总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DomainBatchDetailSet> m_domainBatchDetailSet;
                    bool m_domainBatchDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBATCHOPERATIONLOGDETAILSRESPONSE_H_

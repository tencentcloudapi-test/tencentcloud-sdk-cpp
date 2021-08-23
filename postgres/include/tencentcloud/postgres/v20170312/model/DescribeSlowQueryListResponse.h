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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DurationAnalysis.h>
#include <tencentcloud/postgres/v20170312/model/RawSlowQuery.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryList返回参数结构体
                */
                class DescribeSlowQueryListResponse : public AbstractModel
                {
                public:
                    DescribeSlowQueryListResponse();
                    ~DescribeSlowQueryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取选定时间范围内慢SQL总条数。
                     * @return TotalCount 选定时间范围内慢SQL总条数。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取指定时间范围内，慢SQL耗时分段分析。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationAnalysis 指定时间范围内，慢SQL耗时分段分析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DurationAnalysis> GetDurationAnalysis() const;

                    /**
                     * 判断参数 DurationAnalysis 是否已赋值
                     * @return DurationAnalysis 是否已赋值
                     */
                    bool DurationAnalysisHasBeenSet() const;

                    /**
                     * 获取指定时间范围内 慢SQL流水。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawSlowQueryList 指定时间范围内 慢SQL流水。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RawSlowQuery> GetRawSlowQueryList() const;

                    /**
                     * 判断参数 RawSlowQueryList 是否已赋值
                     * @return RawSlowQueryList 是否已赋值
                     */
                    bool RawSlowQueryListHasBeenSet() const;

                private:

                    /**
                     * 选定时间范围内慢SQL总条数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 指定时间范围内，慢SQL耗时分段分析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DurationAnalysis> m_durationAnalysis;
                    bool m_durationAnalysisHasBeenSet;

                    /**
                     * 指定时间范围内 慢SQL流水。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RawSlowQuery> m_rawSlowQueryList;
                    bool m_rawSlowQueryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_

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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeStatisticSummary返回参数结构体
                */
                class DescribeStatisticSummaryResponse : public AbstractModel
                {
                public:
                    DescribeStatisticSummaryResponse();
                    ~DescribeStatisticSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordingDevice 录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRecordingDevice() const;

                    /**
                     * 判断参数 RecordingDevice 是否已赋值
                     * @return RecordingDevice 是否已赋值
                     */
                    bool RecordingDeviceHasBeenSet() const;

                    /**
                     * 获取非录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonRecordingDevice 非录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetNonRecordingDevice() const;

                    /**
                     * 判断参数 NonRecordingDevice 是否已赋值
                     * @return NonRecordingDevice 是否已赋值
                     */
                    bool NonRecordingDeviceHasBeenSet() const;

                    /**
                     * 获取观看流量总数。为直播观看流量与点播观看流量之和。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WatchFlux 观看流量总数。为直播观看流量与点播观看流量之和。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetWatchFlux() const;

                    /**
                     * 判断参数 WatchFlux 是否已赋值
                     * @return WatchFlux 是否已赋值
                     */
                    bool WatchFluxHasBeenSet() const;

                    /**
                     * 获取累计有效存储容量总数。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageUsage 累计有效存储容量总数。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetStorageUsage() const;

                    /**
                     * 判断参数 StorageUsage 是否已赋值
                     * @return StorageUsage 是否已赋值
                     */
                    bool StorageUsageHasBeenSet() const;

                    /**
                     * 获取X-P2P分享流量。单位 Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P2PFluxTotal X-P2P分享流量。单位 Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetP2PFluxTotal() const;

                    /**
                     * 判断参数 P2PFluxTotal 是否已赋值
                     * @return P2PFluxTotal 是否已赋值
                     */
                    bool P2PFluxTotalHasBeenSet() const;

                    /**
                     * 获取X-P2P峰值带宽。 单位bps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P2PPeakValue X-P2P峰值带宽。 单位bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetP2PPeakValue() const;

                    /**
                     * 判断参数 P2PPeakValue 是否已赋值
                     * @return P2PPeakValue 是否已赋值
                     */
                    bool P2PPeakValueHasBeenSet() const;

                private:

                    /**
                     * 录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordingDevice;
                    bool m_recordingDeviceHasBeenSet;

                    /**
                     * 非录制设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nonRecordingDevice;
                    bool m_nonRecordingDeviceHasBeenSet;

                    /**
                     * 观看流量总数。为直播观看流量与点播观看流量之和。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_watchFlux;
                    bool m_watchFluxHasBeenSet;

                    /**
                     * 累计有效存储容量总数。单位：GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_storageUsage;
                    bool m_storageUsageHasBeenSet;

                    /**
                     * X-P2P分享流量。单位 Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p2PFluxTotal;
                    bool m_p2PFluxTotalHasBeenSet;

                    /**
                     * X-P2P峰值带宽。 单位bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p2PPeakValue;
                    bool m_p2PPeakValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYRESPONSE_H_

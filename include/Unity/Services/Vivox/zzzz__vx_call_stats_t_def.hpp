#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_call_stats_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_int;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_call_stats_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_call_stats_t);
// Type: Unity.Services.Vivox::vx_call_stats_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_call_stats_t*
class CORDL_TYPE vx_call_stats_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_call_id, put = set_call_id))::StringW call_id;

  __declspec(property(get = get_capture_device_consecutively_read_count,
                      put = set_capture_device_consecutively_read_count))::Unity::Services::Vivox::SWIGTYPE_p_int* capture_device_consecutively_read_count;

  __declspec(property(get = get_codec_mode, put = set_codec_mode)) int32_t codec_mode;

  __declspec(property(get = get_codec_name, put = set_codec_name))::StringW codec_name;

  __declspec(property(get = get_current_bars, put = set_current_bars)) int32_t current_bars;

  __declspec(property(get = get_current_opus_bandwidth, put = set_current_opus_bandwidth)) int32_t current_opus_bandwidth;

  __declspec(property(get = get_current_opus_bit_rate, put = set_current_opus_bit_rate)) int32_t current_opus_bit_rate;

  __declspec(property(get = get_current_opus_complexity, put = set_current_opus_complexity)) int32_t current_opus_complexity;

  __declspec(property(get = get_current_opus_max_packet_size, put = set_current_opus_max_packet_size)) int32_t current_opus_max_packet_size;

  __declspec(property(get = get_current_opus_vbr_mode, put = set_current_opus_vbr_mode)) int32_t current_opus_vbr_mode;

  __declspec(property(get = get_incoming_discarded, put = set_incoming_discarded)) int32_t incoming_discarded;

  __declspec(property(get = get_incoming_expected, put = set_incoming_expected)) int32_t incoming_expected;

  __declspec(property(get = get_incoming_out_of_time, put = set_incoming_out_of_time)) int32_t incoming_out_of_time;

  __declspec(property(get = get_incoming_packetloss, put = set_incoming_packetloss)) int32_t incoming_packetloss;

  __declspec(property(get = get_incoming_received, put = set_incoming_received)) int32_t incoming_received;

  __declspec(property(get = get_insufficient_bandwidth, put = set_insufficient_bandwidth)) int32_t insufficient_bandwidth;

  __declspec(property(get = get_last_latency_measured, put = set_last_latency_measured)) double_t last_latency_measured;

  __declspec(property(get = get_latency_measurement_count, put = set_latency_measurement_count)) int32_t latency_measurement_count;

  __declspec(property(get = get_latency_packets_dropped, put = set_latency_packets_dropped)) int32_t latency_packets_dropped;

  __declspec(property(get = get_latency_packets_lost, put = set_latency_packets_lost)) int32_t latency_packets_lost;

  __declspec(property(get = get_latency_packets_malformed, put = set_latency_packets_malformed)) int32_t latency_packets_malformed;

  __declspec(property(get = get_latency_packets_negative_latency, put = set_latency_packets_negative_latency)) int32_t latency_packets_negative_latency;

  __declspec(property(get = get_latency_packets_sent, put = set_latency_packets_sent)) int32_t latency_packets_sent;

  __declspec(property(get = get_latency_sum, put = set_latency_sum)) double_t latency_sum;

  __declspec(property(get = get_max_bars, put = set_max_bars)) int32_t max_bars;

  __declspec(property(get = get_max_latency, put = set_max_latency)) double_t max_latency;

  __declspec(property(get = get_min_bars, put = set_min_bars)) int32_t min_bars;

  __declspec(property(get = get_min_latency, put = set_min_latency)) double_t min_latency;

  __declspec(property(get = get_outgoing_sent, put = set_outgoing_sent)) int32_t outgoing_sent;

  __declspec(property(get = get_pk_loss, put = set_pk_loss)) int32_t pk_loss;

  __declspec(property(get = get_plc_on, put = set_plc_on)) int32_t plc_on;

  __declspec(property(get = get_plc_synthetic_frames, put = set_plc_synthetic_frames)) int32_t plc_synthetic_frames;

  __declspec(property(get = get_r_factor, put = set_r_factor)) double_t r_factor;

  __declspec(property(get = get_render_device_errors, put = set_render_device_errors)) int32_t render_device_errors;

  __declspec(property(get = get_render_device_overruns, put = set_render_device_overruns)) int32_t render_device_overruns;

  __declspec(property(get = get_render_device_underruns, put = set_render_device_underruns)) int32_t render_device_underruns;

  __declspec(property(get = get_sample_interval_begin, put = set_sample_interval_begin)) double_t sample_interval_begin;

  __declspec(property(get = get_sample_interval_end, put = set_sample_interval_end)) double_t sample_interval_end;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x278c154, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x278c260, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x278c1c0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_call_stats_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_call_stats_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x278e34c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x278bfa8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x278bffc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_call_stats_t* obj);

  /// @brief Method get_call_id, addr 0x278cfb0, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_call_id();

  /// @brief Method get_capture_device_consecutively_read_count, addr 0x278de68, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_int* get_capture_device_consecutively_read_count();

  /// @brief Method get_codec_mode, addr 0x278d2f0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_codec_mode();

  /// @brief Method get_codec_name, addr 0x278d220, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_codec_name();

  /// @brief Method get_current_bars, addr 0x278c6c0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_bars();

  /// @brief Method get_current_opus_bandwidth, addr 0x278e21c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_opus_bandwidth();

  /// @brief Method get_current_opus_bit_rate, addr 0x278dfac, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_opus_bit_rate();

  /// @brief Method get_current_opus_complexity, addr 0x278e07c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_opus_complexity();

  /// @brief Method get_current_opus_max_packet_size, addr 0x278e2ec, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_opus_max_packet_size();

  /// @brief Method get_current_opus_vbr_mode, addr 0x278e14c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_current_opus_vbr_mode();

  /// @brief Method get_incoming_discarded, addr 0x278cba0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming_discarded();

  /// @brief Method get_incoming_expected, addr 0x278c930, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming_expected();

  /// @brief Method get_incoming_out_of_time, addr 0x278cad0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming_out_of_time();

  /// @brief Method get_incoming_packetloss, addr 0x278ca00, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming_packetloss();

  /// @brief Method get_incoming_received, addr 0x278c860, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_incoming_received();

  /// @brief Method get_insufficient_bandwidth, addr 0x278c450, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_insufficient_bandwidth();

  /// @brief Method get_last_latency_measured, addr 0x278d700, size 0x60, virtual false, abstract: false, final false
  inline double_t get_last_latency_measured();

  /// @brief Method get_latency_measurement_count, addr 0x278d560, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_measurement_count();

  /// @brief Method get_latency_packets_dropped, addr 0x278da40, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_packets_dropped();

  /// @brief Method get_latency_packets_lost, addr 0x278d7d0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_packets_lost();

  /// @brief Method get_latency_packets_malformed, addr 0x278db10, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_packets_malformed();

  /// @brief Method get_latency_packets_negative_latency, addr 0x278dbe0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_packets_negative_latency();

  /// @brief Method get_latency_packets_sent, addr 0x278d970, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_latency_packets_sent();

  /// @brief Method get_latency_sum, addr 0x278d630, size 0x60, virtual false, abstract: false, final false
  inline double_t get_latency_sum();

  /// @brief Method get_max_bars, addr 0x278c5f0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_max_bars();

  /// @brief Method get_max_latency, addr 0x278d490, size 0x60, virtual false, abstract: false, final false
  inline double_t get_max_latency();

  /// @brief Method get_min_bars, addr 0x278c520, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_min_bars();

  /// @brief Method get_min_latency, addr 0x278d3c0, size 0x60, virtual false, abstract: false, final false
  inline double_t get_min_latency();

  /// @brief Method get_outgoing_sent, addr 0x278cc70, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_outgoing_sent();

  /// @brief Method get_pk_loss, addr 0x278c790, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_pk_loss();

  /// @brief Method get_plc_on, addr 0x278d080, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_plc_on();

  /// @brief Method get_plc_synthetic_frames, addr 0x278d150, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_plc_synthetic_frames();

  /// @brief Method get_r_factor, addr 0x278d8a0, size 0x60, virtual false, abstract: false, final false
  inline double_t get_r_factor();

  /// @brief Method get_render_device_errors, addr 0x278cee0, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_device_errors();

  /// @brief Method get_render_device_overruns, addr 0x278ce10, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_device_overruns();

  /// @brief Method get_render_device_underruns, addr 0x278cd40, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_render_device_underruns();

  /// @brief Method get_sample_interval_begin, addr 0x278dcb0, size 0x60, virtual false, abstract: false, final false
  inline double_t get_sample_interval_begin();

  /// @brief Method get_sample_interval_end, addr 0x278dd80, size 0x60, virtual false, abstract: false, final false
  inline double_t get_sample_interval_end();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_call_id, addr 0x278cf40, size 0x70, virtual false, abstract: false, final false
  inline void set_call_id(::StringW value);

  /// @brief Method set_capture_device_consecutively_read_count, addr 0x278dde0, size 0x88, virtual false, abstract: false, final false
  inline void set_capture_device_consecutively_read_count(::Unity::Services::Vivox::SWIGTYPE_p_int* value);

  /// @brief Method set_codec_mode, addr 0x278d280, size 0x70, virtual false, abstract: false, final false
  inline void set_codec_mode(int32_t value);

  /// @brief Method set_codec_name, addr 0x278d1b0, size 0x70, virtual false, abstract: false, final false
  inline void set_codec_name(::StringW value);

  /// @brief Method set_current_bars, addr 0x278c650, size 0x70, virtual false, abstract: false, final false
  inline void set_current_bars(int32_t value);

  /// @brief Method set_current_opus_bandwidth, addr 0x278e1ac, size 0x70, virtual false, abstract: false, final false
  inline void set_current_opus_bandwidth(int32_t value);

  /// @brief Method set_current_opus_bit_rate, addr 0x278df3c, size 0x70, virtual false, abstract: false, final false
  inline void set_current_opus_bit_rate(int32_t value);

  /// @brief Method set_current_opus_complexity, addr 0x278e00c, size 0x70, virtual false, abstract: false, final false
  inline void set_current_opus_complexity(int32_t value);

  /// @brief Method set_current_opus_max_packet_size, addr 0x278e27c, size 0x70, virtual false, abstract: false, final false
  inline void set_current_opus_max_packet_size(int32_t value);

  /// @brief Method set_current_opus_vbr_mode, addr 0x278e0dc, size 0x70, virtual false, abstract: false, final false
  inline void set_current_opus_vbr_mode(int32_t value);

  /// @brief Method set_incoming_discarded, addr 0x278cb30, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming_discarded(int32_t value);

  /// @brief Method set_incoming_expected, addr 0x278c8c0, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming_expected(int32_t value);

  /// @brief Method set_incoming_out_of_time, addr 0x278ca60, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming_out_of_time(int32_t value);

  /// @brief Method set_incoming_packetloss, addr 0x278c990, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming_packetloss(int32_t value);

  /// @brief Method set_incoming_received, addr 0x278c7f0, size 0x70, virtual false, abstract: false, final false
  inline void set_incoming_received(int32_t value);

  /// @brief Method set_insufficient_bandwidth, addr 0x278c3e0, size 0x70, virtual false, abstract: false, final false
  inline void set_insufficient_bandwidth(int32_t value);

  /// @brief Method set_last_latency_measured, addr 0x278d690, size 0x70, virtual false, abstract: false, final false
  inline void set_last_latency_measured(double_t value);

  /// @brief Method set_latency_measurement_count, addr 0x278d4f0, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_measurement_count(int32_t value);

  /// @brief Method set_latency_packets_dropped, addr 0x278d9d0, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_packets_dropped(int32_t value);

  /// @brief Method set_latency_packets_lost, addr 0x278d760, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_packets_lost(int32_t value);

  /// @brief Method set_latency_packets_malformed, addr 0x278daa0, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_packets_malformed(int32_t value);

  /// @brief Method set_latency_packets_negative_latency, addr 0x278db70, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_packets_negative_latency(int32_t value);

  /// @brief Method set_latency_packets_sent, addr 0x278d900, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_packets_sent(int32_t value);

  /// @brief Method set_latency_sum, addr 0x278d5c0, size 0x70, virtual false, abstract: false, final false
  inline void set_latency_sum(double_t value);

  /// @brief Method set_max_bars, addr 0x278c580, size 0x70, virtual false, abstract: false, final false
  inline void set_max_bars(int32_t value);

  /// @brief Method set_max_latency, addr 0x278d420, size 0x70, virtual false, abstract: false, final false
  inline void set_max_latency(double_t value);

  /// @brief Method set_min_bars, addr 0x278c4b0, size 0x70, virtual false, abstract: false, final false
  inline void set_min_bars(int32_t value);

  /// @brief Method set_min_latency, addr 0x278d350, size 0x70, virtual false, abstract: false, final false
  inline void set_min_latency(double_t value);

  /// @brief Method set_outgoing_sent, addr 0x278cc00, size 0x70, virtual false, abstract: false, final false
  inline void set_outgoing_sent(int32_t value);

  /// @brief Method set_pk_loss, addr 0x278c720, size 0x70, virtual false, abstract: false, final false
  inline void set_pk_loss(int32_t value);

  /// @brief Method set_plc_on, addr 0x278d010, size 0x70, virtual false, abstract: false, final false
  inline void set_plc_on(int32_t value);

  /// @brief Method set_plc_synthetic_frames, addr 0x278d0e0, size 0x70, virtual false, abstract: false, final false
  inline void set_plc_synthetic_frames(int32_t value);

  /// @brief Method set_r_factor, addr 0x278d830, size 0x70, virtual false, abstract: false, final false
  inline void set_r_factor(double_t value);

  /// @brief Method set_render_device_errors, addr 0x278ce70, size 0x70, virtual false, abstract: false, final false
  inline void set_render_device_errors(int32_t value);

  /// @brief Method set_render_device_overruns, addr 0x278cda0, size 0x70, virtual false, abstract: false, final false
  inline void set_render_device_overruns(int32_t value);

  /// @brief Method set_render_device_underruns, addr 0x278ccd0, size 0x70, virtual false, abstract: false, final false
  inline void set_render_device_underruns(int32_t value);

  /// @brief Method set_sample_interval_begin, addr 0x278dc40, size 0x70, virtual false, abstract: false, final false
  inline void set_sample_interval_begin(double_t value);

  /// @brief Method set_sample_interval_end, addr 0x278dd10, size 0x70, virtual false, abstract: false, final false
  inline void set_sample_interval_end(double_t value);

  /// @brief Method swigRelease, addr 0x278c078, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_call_stats_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_call_stats_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_call_stats_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_call_stats_t(vx_call_stats_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_call_stats_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_call_stats_t(vx_call_stats_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_call_stats_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_call_stats_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_call_stats_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_call_stats_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_call_stats_t*, "Unity.Services.Vivox", "vx_call_stats_t");

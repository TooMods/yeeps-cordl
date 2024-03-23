#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_system_stats_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_stat_sample_t;
}
namespace Unity::Services::Vivox {
class vx_stat_thread_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_system_stats_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_system_stats_t);
// Type: Unity.Services.Vivox::vx_system_stats_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_system_stats_t*
class CORDL_TYPE vx_system_stats_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ar_source_count, put = set_ar_source_count)) int32_t ar_source_count;

  __declspec(property(get = get_ar_source_free_buffers, put = set_ar_source_free_buffers))::Unity::Services::Vivox::vx_stat_sample_t* ar_source_free_buffers;

  __declspec(property(get = get_ar_source_poll_count, put = set_ar_source_poll_count)) int32_t ar_source_poll_count;

  __declspec(property(get = get_ar_source_queue_depth, put = set_ar_source_queue_depth))::Unity::Services::Vivox::vx_stat_sample_t* ar_source_queue_depth;

  __declspec(property(get = get_ar_source_queue_limit, put = set_ar_source_queue_limit)) int32_t ar_source_queue_limit;

  __declspec(property(get = get_ar_source_queue_overflows, put = set_ar_source_queue_overflows)) int32_t ar_source_queue_overflows;

  __declspec(property(get = get_clnt_count, put = set_clnt_count)) int32_t clnt_count;

  __declspec(property(get = get_lc_count, put = set_lc_count)) int32_t lc_count;

  __declspec(property(get = get_mps_count, put = set_mps_count)) int32_t mps_count;

  __declspec(property(get = get_mpsg_count, put = set_mpsg_count)) int32_t mpsg_count;

  __declspec(property(get = get_msgovrld_count, put = set_msgovrld_count)) uint32_t msgovrld_count;

  __declspec(property(get = get_ss_size, put = set_ss_size)) int32_t ss_size;

  __declspec(property(get = get_strms_count, put = set_strms_count)) int32_t strms_count;

  __declspec(property(get = get_strr_count, put = set_strr_count)) int32_t strr_count;

  __declspec(property(get = get_strss_count, put = set_strss_count)) int32_t strss_count;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_ticker_thread, put = set_ticker_thread))::Unity::Services::Vivox::vx_stat_thread_t* ticker_thread;

  __declspec(property(get = get_vp_count, put = set_vp_count)) int32_t vp_count;

  __declspec(property(get = get_vp_thread, put = set_vp_thread))::Unity::Services::Vivox::vx_stat_thread_t* vp_thread;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16cf11c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16cf228, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16cf188, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_system_stats_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_system_stats_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16d04f8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16cef70, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16cefc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_system_stats_t* obj);

  /// @brief Method get_ar_source_count, addr 0x16cf4e8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_ar_source_count();

  /// @brief Method get_ar_source_free_buffers, addr 0x16cf90c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_stat_sample_t* get_ar_source_free_buffers();

  /// @brief Method get_ar_source_poll_count, addr 0x16cf758, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_ar_source_poll_count();

  /// @brief Method get_ar_source_queue_depth, addr 0x16cfa88, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_stat_sample_t* get_ar_source_queue_depth();

  /// @brief Method get_ar_source_queue_limit, addr 0x16cf5b8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_ar_source_queue_limit();

  /// @brief Method get_ar_source_queue_overflows, addr 0x16cf688, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_ar_source_queue_overflows();

  /// @brief Method get_clnt_count, addr 0x16cfee8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_clnt_count();

  /// @brief Method get_lc_count, addr 0x16cffb8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_lc_count();

  /// @brief Method get_mps_count, addr 0x16d0088, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_mps_count();

  /// @brief Method get_mpsg_count, addr 0x16d0158, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_mpsg_count();

  /// @brief Method get_msgovrld_count, addr 0x16cf828, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_msgovrld_count();

  /// @brief Method get_ss_size, addr 0x16cf418, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_ss_size();

  /// @brief Method get_strms_count, addr 0x16d0228, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_strms_count();

  /// @brief Method get_strr_count, addr 0x16d02f8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_strr_count();

  /// @brief Method get_strss_count, addr 0x16d03c8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_strss_count();

  /// @brief Method get_ticker_thread, addr 0x16cfd80, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_stat_thread_t* get_ticker_thread();

  /// @brief Method get_vp_count, addr 0x16d0498, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_vp_count();

  /// @brief Method get_vp_thread, addr 0x16cfc04, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_stat_thread_t* get_vp_thread();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_ar_source_count, addr 0x16cf478, size 0x70, virtual false, abstract: false, final false
  inline void set_ar_source_count(int32_t value);

  /// @brief Method set_ar_source_free_buffers, addr 0x16cf888, size 0x84, virtual false, abstract: false, final false
  inline void set_ar_source_free_buffers(::Unity::Services::Vivox::vx_stat_sample_t* value);

  /// @brief Method set_ar_source_poll_count, addr 0x16cf6e8, size 0x70, virtual false, abstract: false, final false
  inline void set_ar_source_poll_count(int32_t value);

  /// @brief Method set_ar_source_queue_depth, addr 0x16cfa04, size 0x84, virtual false, abstract: false, final false
  inline void set_ar_source_queue_depth(::Unity::Services::Vivox::vx_stat_sample_t* value);

  /// @brief Method set_ar_source_queue_limit, addr 0x16cf548, size 0x70, virtual false, abstract: false, final false
  inline void set_ar_source_queue_limit(int32_t value);

  /// @brief Method set_ar_source_queue_overflows, addr 0x16cf618, size 0x70, virtual false, abstract: false, final false
  inline void set_ar_source_queue_overflows(int32_t value);

  /// @brief Method set_clnt_count, addr 0x16cfe78, size 0x70, virtual false, abstract: false, final false
  inline void set_clnt_count(int32_t value);

  /// @brief Method set_lc_count, addr 0x16cff48, size 0x70, virtual false, abstract: false, final false
  inline void set_lc_count(int32_t value);

  /// @brief Method set_mps_count, addr 0x16d0018, size 0x70, virtual false, abstract: false, final false
  inline void set_mps_count(int32_t value);

  /// @brief Method set_mpsg_count, addr 0x16d00e8, size 0x70, virtual false, abstract: false, final false
  inline void set_mpsg_count(int32_t value);

  /// @brief Method set_msgovrld_count, addr 0x16cf7b8, size 0x70, virtual false, abstract: false, final false
  inline void set_msgovrld_count(uint32_t value);

  /// @brief Method set_ss_size, addr 0x16cf3a8, size 0x70, virtual false, abstract: false, final false
  inline void set_ss_size(int32_t value);

  /// @brief Method set_strms_count, addr 0x16d01b8, size 0x70, virtual false, abstract: false, final false
  inline void set_strms_count(int32_t value);

  /// @brief Method set_strr_count, addr 0x16d0288, size 0x70, virtual false, abstract: false, final false
  inline void set_strr_count(int32_t value);

  /// @brief Method set_strss_count, addr 0x16d0358, size 0x70, virtual false, abstract: false, final false
  inline void set_strss_count(int32_t value);

  /// @brief Method set_ticker_thread, addr 0x16cfcfc, size 0x84, virtual false, abstract: false, final false
  inline void set_ticker_thread(::Unity::Services::Vivox::vx_stat_thread_t* value);

  /// @brief Method set_vp_count, addr 0x16d0428, size 0x70, virtual false, abstract: false, final false
  inline void set_vp_count(int32_t value);

  /// @brief Method set_vp_thread, addr 0x16cfb80, size 0x84, virtual false, abstract: false, final false
  inline void set_vp_thread(::Unity::Services::Vivox::vx_stat_thread_t* value);

  /// @brief Method swigRelease, addr 0x16cf040, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_system_stats_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_system_stats_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_system_stats_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_system_stats_t(vx_system_stats_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_system_stats_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_system_stats_t(vx_system_stats_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_system_stats_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_system_stats_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_system_stats_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_system_stats_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_system_stats_t*, "Unity.Services.Vivox", "vx_system_stats_t");

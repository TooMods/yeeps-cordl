#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_resp_aux_connectivity_info_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_connectivity_test_result;
}
namespace Unity::Services::Vivox {
class vx_resp_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_resp_aux_connectivity_info_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t);
// Type: Unity.Services.Vivox::vx_resp_aux_connectivity_info_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_resp_aux_connectivity_info_t*
class CORDL_TYPE vx_resp_aux_connectivity_info_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_resp_base_t* base_;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  __declspec(property(get = get_echo_port, put = set_echo_port)) int32_t echo_port;

  __declspec(property(get = get_echo_server, put = set_echo_server))::StringW echo_server;

  __declspec(property(get = get_first_sip_port, put = set_first_sip_port)) int32_t first_sip_port;

  __declspec(property(get = get_rtcp_port, put = set_rtcp_port)) int32_t rtcp_port;

  __declspec(property(get = get_rtp_port, put = set_rtp_port)) int32_t rtp_port;

  __declspec(property(get = get_second_sip_port, put = set_second_sip_port)) int32_t second_sip_port;

  __declspec(property(get = get_stun_server, put = set_stun_server))::StringW stun_server;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_test_results, put = set_test_results))::Unity::Services::Vivox::SWIGTYPE_p_p_vx_connectivity_test_result* test_results;

  __declspec(property(get = get_timeout, put = set_timeout)) int32_t timeout;

  __declspec(property(get = get_well_known_ip, put = set_well_known_ip))::StringW well_known_ip;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x29f8750, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x29f885c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x29f87bc, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x29f94d4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29f85a4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x29f85f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* obj);

  /// @brief Method get_base_, addr 0x29f8a60, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_resp_base_t* get_base_();

  /// @brief Method get_count, addr 0x29f8bc8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_echo_port, addr 0x29f9064, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_echo_port();

  /// @brief Method get_echo_server, addr 0x29f8f94, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_echo_server();

  /// @brief Method get_first_sip_port, addr 0x29f9204, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_first_sip_port();

  /// @brief Method get_rtcp_port, addr 0x29f9474, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_rtcp_port();

  /// @brief Method get_rtp_port, addr 0x29f93a4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_rtp_port();

  /// @brief Method get_second_sip_port, addr 0x29f92d4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_second_sip_port();

  /// @brief Method get_stun_server, addr 0x29f8ec4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_stun_server();

  /// @brief Method get_test_results, addr 0x29f8cb0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_connectivity_test_result* get_test_results();

  /// @brief Method get_timeout, addr 0x29f9134, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_timeout();

  /// @brief Method get_well_known_ip, addr 0x29f8df4, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_well_known_ip();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x29f89dc, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_resp_base_t* value);

  /// @brief Method set_count, addr 0x29f8b58, size 0x70, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

  /// @brief Method set_echo_port, addr 0x29f8ff4, size 0x70, virtual false, abstract: false, final false
  inline void set_echo_port(int32_t value);

  /// @brief Method set_echo_server, addr 0x29f8f24, size 0x70, virtual false, abstract: false, final false
  inline void set_echo_server(::StringW value);

  /// @brief Method set_first_sip_port, addr 0x29f9194, size 0x70, virtual false, abstract: false, final false
  inline void set_first_sip_port(int32_t value);

  /// @brief Method set_rtcp_port, addr 0x29f9404, size 0x70, virtual false, abstract: false, final false
  inline void set_rtcp_port(int32_t value);

  /// @brief Method set_rtp_port, addr 0x29f9334, size 0x70, virtual false, abstract: false, final false
  inline void set_rtp_port(int32_t value);

  /// @brief Method set_second_sip_port, addr 0x29f9264, size 0x70, virtual false, abstract: false, final false
  inline void set_second_sip_port(int32_t value);

  /// @brief Method set_stun_server, addr 0x29f8e54, size 0x70, virtual false, abstract: false, final false
  inline void set_stun_server(::StringW value);

  /// @brief Method set_test_results, addr 0x29f8c28, size 0x88, virtual false, abstract: false, final false
  inline void set_test_results(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_connectivity_test_result* value);

  /// @brief Method set_timeout, addr 0x29f90c4, size 0x70, virtual false, abstract: false, final false
  inline void set_timeout(int32_t value);

  /// @brief Method set_well_known_ip, addr 0x29f8d84, size 0x70, virtual false, abstract: false, final false
  inline void set_well_known_ip(::StringW value);

  /// @brief Method swigRelease, addr 0x29f8674, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_resp_aux_connectivity_info_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_aux_connectivity_info_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_resp_aux_connectivity_info_t(vx_resp_aux_connectivity_info_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_resp_aux_connectivity_info_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_resp_aux_connectivity_info_t(vx_resp_aux_connectivity_info_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_resp_aux_connectivity_info_t*, "Unity.Services.Vivox", "vx_resp_aux_connectivity_info_t");

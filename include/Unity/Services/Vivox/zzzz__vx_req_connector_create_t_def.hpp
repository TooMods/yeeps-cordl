#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_connector_create_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_attempt_stun;
}
namespace Unity::Services::Vivox {
struct vx_connector_mode;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
namespace Unity::Services::Vivox {
struct vx_session_handle_type;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_connector_create_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_connector_create_t);
// Type: Unity.Services.Vivox::vx_req_connector_create_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_connector_create_t*
class CORDL_TYPE vx_req_connector_create_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_acct_mgmt_server, put = set_acct_mgmt_server))::StringW acct_mgmt_server;

  __declspec(property(get = get_allow_cross_domain_logins, put = set_allow_cross_domain_logins)) int32_t allow_cross_domain_logins;

  __declspec(property(get = get_application, put = set_application))::StringW application;

  __declspec(property(get = get_attempt_stun, put = set_attempt_stun))::Unity::Services::Vivox::vx_attempt_stun attempt_stun;

  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_client_name, put = set_client_name))::StringW client_name;

  __declspec(property(get = get_configured_codecs, put = set_configured_codecs)) uint32_t configured_codecs;

  __declspec(property(get = get_connector_handle, put = set_connector_handle))::StringW connector_handle;

  __declspec(property(get = get_default_codec, put = set_default_codec)) int32_t default_codec;

  __declspec(property(get = get_enable_duplicate_participant_uris, put = set_enable_duplicate_participant_uris)) int32_t enable_duplicate_participant_uris;

  __declspec(property(get = get_http_proxy_server_name, put = set_http_proxy_server_name))::StringW http_proxy_server_name;

  __declspec(property(get = get_http_proxy_server_port, put = set_http_proxy_server_port)) int32_t http_proxy_server_port;

  __declspec(property(get = get_log_filename_prefix, put = set_log_filename_prefix))::StringW log_filename_prefix;

  __declspec(property(get = get_log_filename_suffix, put = set_log_filename_suffix))::StringW log_filename_suffix;

  __declspec(property(get = get_log_folder, put = set_log_folder))::StringW log_folder;

  __declspec(property(get = get_log_level, put = set_log_level)) int32_t log_level;

  __declspec(property(get = get_max_calls, put = set_max_calls)) int32_t max_calls;

  __declspec(property(get = get_maximum_port, put = set_maximum_port)) int32_t maximum_port;

  __declspec(property(get = get_media_probe_server, put = set_media_probe_server))::StringW media_probe_server;

  __declspec(property(get = get_minimum_port, put = set_minimum_port)) int32_t minimum_port;

  __declspec(property(get = get_mode, put = set_mode))::Unity::Services::Vivox::vx_connector_mode mode;

  __declspec(property(get = get_session_handle_type, put = set_session_handle_type))::Unity::Services::Vivox::vx_session_handle_type session_handle_type;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_user_agent_id, put = set_user_agent_id))::StringW user_agent_id;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a56ba0, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a56cac, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a56c0c, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_connector_create_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_connector_create_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a58198, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a569f4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2a56a48, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_connector_create_t* obj);

  /// @brief Method get_acct_mgmt_server, addr 0x2a570f8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_acct_mgmt_server();

  /// @brief Method get_allow_cross_domain_logins, addr 0x2a57ab8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_allow_cross_domain_logins();

  /// @brief Method get_application, addr 0x2a57918, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_application();

  /// @brief Method get_attempt_stun, addr 0x2a57368, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_attempt_stun get_attempt_stun();

  /// @brief Method get_base_, addr 0x2a56e3c, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_client_name, addr 0x2a57028, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_client_name();

  /// @brief Method get_configured_codecs, addr 0x2a58138, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_configured_codecs();

  /// @brief Method get_connector_handle, addr 0x2a58068, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_connector_handle();

  /// @brief Method get_default_codec, addr 0x2a57b88, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_default_codec();

  /// @brief Method get_enable_duplicate_participant_uris, addr 0x2a57f98, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_enable_duplicate_participant_uris();

  /// @brief Method get_http_proxy_server_name, addr 0x2a57df8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_http_proxy_server_name();

  /// @brief Method get_http_proxy_server_port, addr 0x2a57ec8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_http_proxy_server_port();

  /// @brief Method get_log_filename_prefix, addr 0x2a575d8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_log_filename_prefix();

  /// @brief Method get_log_filename_suffix, addr 0x2a576a8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_log_filename_suffix();

  /// @brief Method get_log_folder, addr 0x2a57508, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_log_folder();

  /// @brief Method get_log_level, addr 0x2a57778, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_log_level();

  /// @brief Method get_max_calls, addr 0x2a579e8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_max_calls();

  /// @brief Method get_maximum_port, addr 0x2a57298, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_maximum_port();

  /// @brief Method get_media_probe_server, addr 0x2a57d28, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_media_probe_server();

  /// @brief Method get_minimum_port, addr 0x2a571c8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_minimum_port();

  /// @brief Method get_mode, addr 0x2a57438, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_connector_mode get_mode();

  /// @brief Method get_session_handle_type, addr 0x2a57848, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_session_handle_type get_session_handle_type();

  /// @brief Method get_user_agent_id, addr 0x2a57c58, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_user_agent_id();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2a56e2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_connector_create_t* t);

  /// @brief Method set_acct_mgmt_server, addr 0x2a57088, size 0x70, virtual false, abstract: false, final false
  inline void set_acct_mgmt_server(::StringW value);

  /// @brief Method set_allow_cross_domain_logins, addr 0x2a57a48, size 0x70, virtual false, abstract: false, final false
  inline void set_allow_cross_domain_logins(int32_t value);

  /// @brief Method set_application, addr 0x2a578a8, size 0x70, virtual false, abstract: false, final false
  inline void set_application(::StringW value);

  /// @brief Method set_attempt_stun, addr 0x2a572f8, size 0x70, virtual false, abstract: false, final false
  inline void set_attempt_stun(::Unity::Services::Vivox::vx_attempt_stun value);

  /// @brief Method set_base_, addr 0x2a56f34, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_client_name, addr 0x2a56fb8, size 0x70, virtual false, abstract: false, final false
  inline void set_client_name(::StringW value);

  /// @brief Method set_configured_codecs, addr 0x2a580c8, size 0x70, virtual false, abstract: false, final false
  inline void set_configured_codecs(uint32_t value);

  /// @brief Method set_connector_handle, addr 0x2a57ff8, size 0x70, virtual false, abstract: false, final false
  inline void set_connector_handle(::StringW value);

  /// @brief Method set_default_codec, addr 0x2a57b18, size 0x70, virtual false, abstract: false, final false
  inline void set_default_codec(int32_t value);

  /// @brief Method set_enable_duplicate_participant_uris, addr 0x2a57f28, size 0x70, virtual false, abstract: false, final false
  inline void set_enable_duplicate_participant_uris(int32_t value);

  /// @brief Method set_http_proxy_server_name, addr 0x2a57d88, size 0x70, virtual false, abstract: false, final false
  inline void set_http_proxy_server_name(::StringW value);

  /// @brief Method set_http_proxy_server_port, addr 0x2a57e58, size 0x70, virtual false, abstract: false, final false
  inline void set_http_proxy_server_port(int32_t value);

  /// @brief Method set_log_filename_prefix, addr 0x2a57568, size 0x70, virtual false, abstract: false, final false
  inline void set_log_filename_prefix(::StringW value);

  /// @brief Method set_log_filename_suffix, addr 0x2a57638, size 0x70, virtual false, abstract: false, final false
  inline void set_log_filename_suffix(::StringW value);

  /// @brief Method set_log_folder, addr 0x2a57498, size 0x70, virtual false, abstract: false, final false
  inline void set_log_folder(::StringW value);

  /// @brief Method set_log_level, addr 0x2a57708, size 0x70, virtual false, abstract: false, final false
  inline void set_log_level(int32_t value);

  /// @brief Method set_max_calls, addr 0x2a57978, size 0x70, virtual false, abstract: false, final false
  inline void set_max_calls(int32_t value);

  /// @brief Method set_maximum_port, addr 0x2a57228, size 0x70, virtual false, abstract: false, final false
  inline void set_maximum_port(int32_t value);

  /// @brief Method set_media_probe_server, addr 0x2a57cb8, size 0x70, virtual false, abstract: false, final false
  inline void set_media_probe_server(::StringW value);

  /// @brief Method set_minimum_port, addr 0x2a57158, size 0x70, virtual false, abstract: false, final false
  inline void set_minimum_port(int32_t value);

  /// @brief Method set_mode, addr 0x2a573c8, size 0x70, virtual false, abstract: false, final false
  inline void set_mode(::Unity::Services::Vivox::vx_connector_mode value);

  /// @brief Method set_session_handle_type, addr 0x2a577d8, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle_type(::Unity::Services::Vivox::vx_session_handle_type value);

  /// @brief Method set_user_agent_id, addr 0x2a57be8, size 0x70, virtual false, abstract: false, final false
  inline void set_user_agent_id(::StringW value);

  /// @brief Method swigRelease, addr 0x2a56ac4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_connector_create_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_connector_create_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_connector_create_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_connector_create_t(vx_req_connector_create_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_connector_create_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_connector_create_t(vx_req_connector_create_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_connector_create_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_connector_create_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_connector_create_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_connector_create_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_connector_create_t*, "Unity.Services.Vivox", "vx_req_connector_create_t");

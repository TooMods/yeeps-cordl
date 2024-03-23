#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_channel_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
struct vx_channel_mode;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_channel_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_channel_t);
// Type: Unity.Services.Vivox::vx_channel_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_channel_t*
class CORDL_TYPE vx_channel_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_active_participants, put = set_active_participants)) int32_t active_participants;

  __declspec(property(get = get_capacity, put = set_capacity)) int32_t capacity;

  __declspec(property(get = get_channel_desc, put = set_channel_desc))::StringW channel_desc;

  __declspec(property(get = get_channel_id, put = set_channel_id)) int32_t channel_id;

  __declspec(property(get = get_channel_name, put = set_channel_name))::StringW channel_name;

  __declspec(property(get = get_channel_uri, put = set_channel_uri))::StringW channel_uri;

  __declspec(property(get = get_clamping_dist, put = set_clamping_dist)) int32_t clamping_dist;

  __declspec(property(get = get_dist_model, put = set_dist_model)) int32_t dist_model;

  __declspec(property(get = get_encrypt_audio, put = set_encrypt_audio)) int32_t encrypt_audio;

  __declspec(property(get = get_host, put = set_host))::StringW host;

  __declspec(property(get = get_is_persistent, put = set_is_persistent)) int32_t is_persistent;

  __declspec(property(get = get_is_protected, put = set_is_protected)) int32_t is_protected;

  __declspec(property(get = get_limit, put = set_limit)) int32_t limit;

  __declspec(property(get = get_max_gain, put = set_max_gain)) double_t max_gain;

  __declspec(property(get = get_max_range, put = set_max_range)) int32_t max_range;

  __declspec(property(get = get_mode, put = set_mode))::Unity::Services::Vivox::vx_channel_mode mode;

  __declspec(property(get = get_modified, put = set_modified))::StringW modified;

  __declspec(property(get = get_owner, put = set_owner))::StringW owner;

  __declspec(property(get = get_owner_display_name, put = set_owner_display_name))::StringW owner_display_name;

  __declspec(property(get = get_owner_user_name, put = set_owner_user_name))::StringW owner_user_name;

  __declspec(property(get = get_roll_off, put = set_roll_off)) double_t roll_off;

  __declspec(property(get = get_size, put = set_size)) int32_t size;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type)) int32_t type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x278e590, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x278e69c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x278e5fc, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_channel_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_channel_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x278facc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x278e3e4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x278e438, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_channel_t* obj);

  /// @brief Method get_active_participants, addr 0x278fa6c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_active_participants();

  /// @brief Method get_capacity, addr 0x278ec9c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_channel_desc, addr 0x278e95c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_desc();

  /// @brief Method get_channel_id, addr 0x278eafc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_channel_id();

  /// @brief Method get_channel_name, addr 0x278e88c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_name();

  /// @brief Method get_channel_uri, addr 0x278f3ec, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_channel_uri();

  /// @brief Method get_clamping_dist, addr 0x278f58c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_clamping_dist();

  /// @brief Method get_dist_model, addr 0x278f7fc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_dist_model();

  /// @brief Method get_encrypt_audio, addr 0x278f8cc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_encrypt_audio();

  /// @brief Method get_host, addr 0x278ea2c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_host();

  /// @brief Method get_is_persistent, addr 0x278efdc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_persistent();

  /// @brief Method get_is_protected, addr 0x278f0ac, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_is_protected();

  /// @brief Method get_limit, addr 0x278ebcc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_limit();

  /// @brief Method get_max_gain, addr 0x278f72c, size 0x60, virtual false, abstract: false, final false
  inline double_t get_max_gain();

  /// @brief Method get_max_range, addr 0x278f4bc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_max_range();

  /// @brief Method get_mode, addr 0x278f31c, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_channel_mode get_mode();

  /// @brief Method get_modified, addr 0x278ed6c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_modified();

  /// @brief Method get_owner, addr 0x278ee3c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_owner();

  /// @brief Method get_owner_display_name, addr 0x278f99c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_owner_display_name();

  /// @brief Method get_owner_user_name, addr 0x278ef0c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_owner_user_name();

  /// @brief Method get_roll_off, addr 0x278f65c, size 0x60, virtual false, abstract: false, final false
  inline double_t get_roll_off();

  /// @brief Method get_size, addr 0x278f17c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_size();

  /// @brief Method get_type, addr 0x278f24c, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_active_participants, addr 0x278f9fc, size 0x70, virtual false, abstract: false, final false
  inline void set_active_participants(int32_t value);

  /// @brief Method set_capacity, addr 0x278ec2c, size 0x70, virtual false, abstract: false, final false
  inline void set_capacity(int32_t value);

  /// @brief Method set_channel_desc, addr 0x278e8ec, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_desc(::StringW value);

  /// @brief Method set_channel_id, addr 0x278ea8c, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_id(int32_t value);

  /// @brief Method set_channel_name, addr 0x278e81c, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_name(::StringW value);

  /// @brief Method set_channel_uri, addr 0x278f37c, size 0x70, virtual false, abstract: false, final false
  inline void set_channel_uri(::StringW value);

  /// @brief Method set_clamping_dist, addr 0x278f51c, size 0x70, virtual false, abstract: false, final false
  inline void set_clamping_dist(int32_t value);

  /// @brief Method set_dist_model, addr 0x278f78c, size 0x70, virtual false, abstract: false, final false
  inline void set_dist_model(int32_t value);

  /// @brief Method set_encrypt_audio, addr 0x278f85c, size 0x70, virtual false, abstract: false, final false
  inline void set_encrypt_audio(int32_t value);

  /// @brief Method set_host, addr 0x278e9bc, size 0x70, virtual false, abstract: false, final false
  inline void set_host(::StringW value);

  /// @brief Method set_is_persistent, addr 0x278ef6c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_persistent(int32_t value);

  /// @brief Method set_is_protected, addr 0x278f03c, size 0x70, virtual false, abstract: false, final false
  inline void set_is_protected(int32_t value);

  /// @brief Method set_limit, addr 0x278eb5c, size 0x70, virtual false, abstract: false, final false
  inline void set_limit(int32_t value);

  /// @brief Method set_max_gain, addr 0x278f6bc, size 0x70, virtual false, abstract: false, final false
  inline void set_max_gain(double_t value);

  /// @brief Method set_max_range, addr 0x278f44c, size 0x70, virtual false, abstract: false, final false
  inline void set_max_range(int32_t value);

  /// @brief Method set_mode, addr 0x278f2ac, size 0x70, virtual false, abstract: false, final false
  inline void set_mode(::Unity::Services::Vivox::vx_channel_mode value);

  /// @brief Method set_modified, addr 0x278ecfc, size 0x70, virtual false, abstract: false, final false
  inline void set_modified(::StringW value);

  /// @brief Method set_owner, addr 0x278edcc, size 0x70, virtual false, abstract: false, final false
  inline void set_owner(::StringW value);

  /// @brief Method set_owner_display_name, addr 0x278f92c, size 0x70, virtual false, abstract: false, final false
  inline void set_owner_display_name(::StringW value);

  /// @brief Method set_owner_user_name, addr 0x278ee9c, size 0x70, virtual false, abstract: false, final false
  inline void set_owner_user_name(::StringW value);

  /// @brief Method set_roll_off, addr 0x278f5ec, size 0x70, virtual false, abstract: false, final false
  inline void set_roll_off(double_t value);

  /// @brief Method set_size, addr 0x278f10c, size 0x70, virtual false, abstract: false, final false
  inline void set_size(int32_t value);

  /// @brief Method set_type, addr 0x278f1dc, size 0x70, virtual false, abstract: false, final false
  inline void set_type(int32_t value);

  /// @brief Method swigRelease, addr 0x278e4b4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_channel_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_channel_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_channel_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_channel_t(vx_channel_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_channel_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_channel_t(vx_channel_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_channel_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_channel_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_channel_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_channel_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_channel_t*, "Unity.Services.Vivox", "vx_channel_t");

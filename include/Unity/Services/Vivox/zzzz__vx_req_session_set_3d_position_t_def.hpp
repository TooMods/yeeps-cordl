#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_req_session_set_3d_position_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_double;
}
namespace Unity::Services::Vivox {
struct orientation_type;
}
namespace Unity::Services::Vivox {
struct req_disposition_type_t;
}
namespace Unity::Services::Vivox {
class vx_req_base_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_req_session_set_3d_position_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_req_session_set_3d_position_t);
// Type: Unity.Services.Vivox::vx_req_session_set_3d_position_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_req_session_set_3d_position_t*
class CORDL_TYPE vx_req_session_set_3d_position_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_req_base_t* base_;

  __declspec(property(get = get_listener_at_orientation, put = set_listener_at_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* listener_at_orientation;

  __declspec(property(get = get_listener_left_orientation, put = set_listener_left_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* listener_left_orientation;

  __declspec(property(get = get_listener_position, put = set_listener_position))::Unity::Services::Vivox::SWIGTYPE_p_double* listener_position;

  __declspec(property(get = get_listener_up_orientation, put = set_listener_up_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* listener_up_orientation;

  __declspec(property(get = get_listener_velocity, put = set_listener_velocity))::Unity::Services::Vivox::SWIGTYPE_p_double* listener_velocity;

  __declspec(property(get = get_req_disposition_type, put = set_req_disposition_type))::Unity::Services::Vivox::req_disposition_type_t req_disposition_type;

  __declspec(property(get = get_session_handle, put = set_session_handle))::StringW session_handle;

  __declspec(property(get = get_speaker_at_orientation, put = set_speaker_at_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* speaker_at_orientation;

  __declspec(property(get = get_speaker_left_orientation, put = set_speaker_left_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* speaker_left_orientation;

  __declspec(property(get = get_speaker_position, put = set_speaker_position))::Unity::Services::Vivox::SWIGTYPE_p_double* speaker_position;

  __declspec(property(get = get_speaker_up_orientation, put = set_speaker_up_orientation))::Unity::Services::Vivox::SWIGTYPE_p_double* speaker_up_orientation;

  __declspec(property(get = get_speaker_velocity, put = set_speaker_velocity))::Unity::Services::Vivox::SWIGTYPE_p_double* speaker_velocity;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_type, put = set_type))::Unity::Services::Vivox::orientation_type type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2a6b3b8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2a6b4c4, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2a6b424, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_req_session_set_3d_position_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_req_session_set_3d_position_t* New_ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method Set3DPosition, addr 0x2a6c870, size 0x90, virtual false, abstract: false, final false
  inline void Set3DPosition(::ArrayW<float_t, ::Array<float_t>*> speakerPos, ::ArrayW<float_t, ::Array<float_t>*> listenerPos, ::ArrayW<float_t, ::Array<float_t>*> listenerAtOrient,
                            ::ArrayW<float_t, ::Array<float_t>*> listenerUpOrient);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2a6c7d8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a6b20c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x2a6b260, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_req_session_set_3d_position_t* obj);

  /// @brief Method get_base_, addr 0x2a6b654, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_req_base_t* get_base_();

  /// @brief Method get_listener_at_orientation, addr 0x2a6c2ac, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_listener_at_orientation();

  /// @brief Method get_listener_left_orientation, addr 0x2a6c564, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_listener_left_orientation();

  /// @brief Method get_listener_position, addr 0x2a6bff4, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_listener_position();

  /// @brief Method get_listener_up_orientation, addr 0x2a6c408, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_listener_up_orientation();

  /// @brief Method get_listener_velocity, addr 0x2a6c150, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_listener_velocity();

  /// @brief Method get_req_disposition_type, addr 0x2a6c778, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::req_disposition_type_t get_req_disposition_type();

  /// @brief Method get_session_handle, addr 0x2a6b840, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_session_handle();

  /// @brief Method get_speaker_at_orientation, addr 0x2a6bbe0, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_speaker_at_orientation();

  /// @brief Method get_speaker_left_orientation, addr 0x2a6be98, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_speaker_left_orientation();

  /// @brief Method get_speaker_position, addr 0x2a6b928, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_speaker_position();

  /// @brief Method get_speaker_up_orientation, addr 0x2a6bd3c, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_speaker_up_orientation();

  /// @brief Method get_speaker_velocity, addr 0x2a6ba84, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_double* get_speaker_velocity();

  /// @brief Method get_type, addr 0x2a6c6a8, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::orientation_type get_type();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x2a6b644, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::vx_req_base_t* op_Implicit___Unity__Services__Vivox__vx_req_base_t_(::Unity::Services::Vivox::vx_req_session_set_3d_position_t* t);

  /// @brief Method set_base_, addr 0x2a6b74c, size 0x84, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_req_base_t* value);

  /// @brief Method set_listener_at_orientation, addr 0x2a6c224, size 0x88, virtual false, abstract: false, final false
  inline void set_listener_at_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_listener_left_orientation, addr 0x2a6c4dc, size 0x88, virtual false, abstract: false, final false
  inline void set_listener_left_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_listener_position, addr 0x2a6bf6c, size 0x88, virtual false, abstract: false, final false
  inline void set_listener_position(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_listener_up_orientation, addr 0x2a6c380, size 0x88, virtual false, abstract: false, final false
  inline void set_listener_up_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_listener_velocity, addr 0x2a6c0c8, size 0x88, virtual false, abstract: false, final false
  inline void set_listener_velocity(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_req_disposition_type, addr 0x2a6c708, size 0x70, virtual false, abstract: false, final false
  inline void set_req_disposition_type(::Unity::Services::Vivox::req_disposition_type_t value);

  /// @brief Method set_session_handle, addr 0x2a6b7d0, size 0x70, virtual false, abstract: false, final false
  inline void set_session_handle(::StringW value);

  /// @brief Method set_speaker_at_orientation, addr 0x2a6bb58, size 0x88, virtual false, abstract: false, final false
  inline void set_speaker_at_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_speaker_left_orientation, addr 0x2a6be10, size 0x88, virtual false, abstract: false, final false
  inline void set_speaker_left_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_speaker_position, addr 0x2a6b8a0, size 0x88, virtual false, abstract: false, final false
  inline void set_speaker_position(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_speaker_up_orientation, addr 0x2a6bcb4, size 0x88, virtual false, abstract: false, final false
  inline void set_speaker_up_orientation(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_speaker_velocity, addr 0x2a6b9fc, size 0x88, virtual false, abstract: false, final false
  inline void set_speaker_velocity(::Unity::Services::Vivox::SWIGTYPE_p_double* value);

  /// @brief Method set_type, addr 0x2a6c638, size 0x70, virtual false, abstract: false, final false
  inline void set_type(::Unity::Services::Vivox::orientation_type value);

  /// @brief Method swigRelease, addr 0x2a6b2dc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_req_session_set_3d_position_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_req_session_set_3d_position_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_req_session_set_3d_position_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_req_session_set_3d_position_t(vx_req_session_set_3d_position_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_req_session_set_3d_position_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_req_session_set_3d_position_t(vx_req_session_set_3d_position_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_req_session_set_3d_position_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_session_set_3d_position_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_req_session_set_3d_position_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_req_session_set_3d_position_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_req_session_set_3d_position_t*, "Unity.Services.Vivox", "vx_req_session_set_3d_position_t");

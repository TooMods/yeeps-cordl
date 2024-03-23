#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SWIGTYPE_p_p_vx_req_aux_set_speaker_level)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class SWIGTYPE_p_p_vx_req_aux_set_speaker_level;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level);
// Type: Unity.Services.Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level*
class CORDL_TYPE SWIGTYPE_p_p_vx_req_aux_set_speaker_level : public ::System::Object {
public:
  // Declarations
  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  static inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level* New_ctor();

  static inline ::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level* New_ctor(void* cPtr, bool futureUse);

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2cbca14, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2cbc9c8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool futureUse);

  /// @brief Method getCPtr, addr 0x2cbca90, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level* obj);

  /// @brief Method swigRelease, addr 0x2cbcb0c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SWIGTYPE_p_p_vx_req_aux_set_speaker_level();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SWIGTYPE_p_p_vx_req_aux_set_speaker_level", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SWIGTYPE_p_p_vx_req_aux_set_speaker_level(SWIGTYPE_p_p_vx_req_aux_set_speaker_level&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SWIGTYPE_p_p_vx_req_aux_set_speaker_level", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SWIGTYPE_p_p_vx_req_aux_set_speaker_level(SWIGTYPE_p_p_vx_req_aux_set_speaker_level const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level, ___swigCPtr) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::SWIGTYPE_p_p_vx_req_aux_set_speaker_level*, "Unity.Services.Vivox", "SWIGTYPE_p_p_vx_req_aux_set_speaker_level");

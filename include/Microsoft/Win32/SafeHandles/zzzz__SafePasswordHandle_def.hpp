#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafePasswordHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafePasswordHandle);
// Type: Microsoft.Win32.SafeHandles::SafePasswordHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: ::Microsoft.Win32.SafeHandles::SafePasswordHandle*
class CORDL_TYPE SafePasswordHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
  // Declarations
  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  /// @brief Method CreateHandle, addr 0x28a7690, size 0x58, virtual false, abstract: false, final false
  inline void* CreateHandle(::StringW password);

  /// @brief Method Dispose, addr 0x28a7838, size 0x70, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FreeHandle, addr 0x28a76e8, size 0x5c, virtual false, abstract: false, final false
  inline void FreeHandle();

  /// @brief Method Mono_DangerousGetString, addr 0x28a78d0, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW Mono_DangerousGetString();

  static inline ::Microsoft::Win32::SafeHandles::SafePasswordHandle* New_ctor(::StringW password);

  /// @brief Method ReleaseHandle, addr 0x28a77bc, size 0x7c, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x28a7744, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW password);

  /// @brief Method get_IsInvalid, addr 0x28a78a8, size 0x28, virtual true, abstract: false, final false
  inline bool get_IsInvalid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafePasswordHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafePasswordHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafePasswordHandle(SafePasswordHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafePasswordHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafePasswordHandle(SafePasswordHandle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafePasswordHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafePasswordHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafePasswordHandle*, "Microsoft.Win32.SafeHandles", "SafePasswordHandle");

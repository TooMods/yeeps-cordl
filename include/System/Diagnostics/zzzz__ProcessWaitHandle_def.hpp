#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
CORDL_MODULE_EXPORT(ProcessWaitHandle)
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessWaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessWaitHandle);
// Type: System.Diagnostics::ProcessWaitHandle
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::ProcessWaitHandle*
class CORDL_TYPE ProcessWaitHandle : public ::System::Threading::WaitHandle {
public:
  // Declarations
  static inline ::System::Diagnostics::ProcessWaitHandle* New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle);

  /// @brief Method .ctor, addr 0x12bb504, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessWaitHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessWaitHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessWaitHandle(ProcessWaitHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessWaitHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessWaitHandle(ProcessWaitHandle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessWaitHandle, 0x30>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessWaitHandle*, "System.Diagnostics", "ProcessWaitHandle");

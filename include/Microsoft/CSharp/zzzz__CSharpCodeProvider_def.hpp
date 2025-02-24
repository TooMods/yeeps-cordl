#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/CSharp/zzzz__CodeDomProvider_def.hpp"
CORDL_MODULE_EXPORT(CSharpCodeProvider)
// Forward declare root types
namespace Microsoft::CSharp {
class CSharpCodeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::CSharp::CSharpCodeProvider);
// Type: Microsoft.CSharp::CSharpCodeProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::CSharp {
// Is value type: false
// CS Name: ::Microsoft.CSharp::CSharpCodeProvider*
class CORDL_TYPE CSharpCodeProvider : public ::Microsoft::CSharp::CodeDomProvider {
public:
  // Declarations
  static inline ::Microsoft::CSharp::CSharpCodeProvider* New_ctor();

  /// @brief Method .ctor, addr 0x282a1a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSharpCodeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSharpCodeProvider(CSharpCodeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSharpCodeProvider(CSharpCodeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::CSharp::CSharpCodeProvider, 0x10>, "Size mismatch!");

} // namespace Microsoft::CSharp
NEED_NO_BOX(::Microsoft::CSharp::CSharpCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::CSharp::CSharpCodeProvider*, "Microsoft.CSharp", "CSharpCodeProvider");

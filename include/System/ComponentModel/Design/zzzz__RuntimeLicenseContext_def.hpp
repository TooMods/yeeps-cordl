#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimeLicenseContext)
namespace System::Collections {
class Hashtable;
}
namespace System::Diagnostics {
class TraceSwitch;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class RuntimeLicenseContext;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::RuntimeLicenseContext);
// Type: System.ComponentModel.Design::RuntimeLicenseContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::RuntimeLicenseContext*
class CORDL_TYPE RuntimeLicenseContext : public ::System::ComponentModel::LicenseContext {
public:
  // Declarations
  /// @brief Field s_runtimeLicenseContextSwitch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_runtimeLicenseContextSwitch, put = setStaticF_s_runtimeLicenseContextSwitch))::System::Diagnostics::TraceSwitch* s_runtimeLicenseContextSwitch;

  /// @brief Field savedLicenseKeys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_savedLicenseKeys, put = __cordl_internal_set_savedLicenseKeys))::System::Collections::Hashtable* savedLicenseKeys;

  /// @brief Method CaseInsensitiveManifestResourceStreamLookup, addr 0x18eaa60, size 0x1c4, virtual false, abstract: false, final false
  inline ::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly* satellite, ::StringW name);

  /// @brief Method GetLocalPath, addr 0x18ea4a8, size 0x88, virtual false, abstract: false, final false
  inline ::StringW GetLocalPath(::StringW fileName);

  /// @brief Method GetSavedLicenseKey, addr 0x18ea530, size 0x530, virtual true, abstract: false, final false
  inline ::StringW GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly);

  static inline ::System::ComponentModel::Design::RuntimeLicenseContext* New_ctor();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_savedLicenseKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_savedLicenseKeys() const;

  constexpr void __cordl_internal_set_savedLicenseKeys(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x18eae20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Diagnostics::TraceSwitch* getStaticF_s_runtimeLicenseContextSwitch();

  static inline void setStaticF_s_runtimeLicenseContextSwitch(::System::Diagnostics::TraceSwitch* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLicenseContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLicenseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeLicenseContext(RuntimeLicenseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLicenseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeLicenseContext(RuntimeLicenseContext const&) = delete;

  /// @brief Field savedLicenseKeys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___savedLicenseKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::RuntimeLicenseContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::RuntimeLicenseContext, ___savedLicenseKeys) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::RuntimeLicenseContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::RuntimeLicenseContext*, "System.ComponentModel.Design", "RuntimeLicenseContext");

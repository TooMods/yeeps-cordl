#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingSatelliteAssemblyException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Resources {
class MissingSatelliteAssemblyException;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::MissingSatelliteAssemblyException);
// Type: System.Resources::MissingSatelliteAssemblyException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::MissingSatelliteAssemblyException*
class CORDL_TYPE MissingSatelliteAssemblyException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _cultureName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cultureName, put = __cordl_internal_set__cultureName))::StringW _cultureName;

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor();

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor(::StringW message, ::StringW cultureName);

  constexpr ::StringW const& __cordl_internal_get__cultureName() const;

  constexpr ::StringW& __cordl_internal_get__cultureName();

  constexpr void __cordl_internal_set__cultureName(::StringW value);

  /// @brief Method .ctor, addr 0x1b47020, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b470b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1b4707c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW cultureName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingSatelliteAssemblyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingSatelliteAssemblyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingSatelliteAssemblyException(MissingSatelliteAssemblyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingSatelliteAssemblyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingSatelliteAssemblyException(MissingSatelliteAssemblyException const&) = delete;

  /// @brief Field _cultureName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____cultureName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::MissingSatelliteAssemblyException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Resources::MissingSatelliteAssemblyException, ____cultureName) == 0x90, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::MissingSatelliteAssemblyException);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::MissingSatelliteAssemblyException*, "System.Resources", "MissingSatelliteAssemblyException");

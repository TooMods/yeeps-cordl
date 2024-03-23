#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreeExtensions)
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTreeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTreeExtensions);
// Type: Unity.Services.Core.Internal::DependencyTreeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::DependencyTreeExtensions*
class CORDL_TYPE DependencyTreeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetComponentIdentifier, addr 0x266dad0, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetComponentIdentifier(::Unity::Services::Core::Internal::IServiceComponent* component);

  /// @brief Method GetComponentJObject, addr 0x266d698, size 0x35c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* GetComponentJObject(::Unity::Services::Core::Internal::DependencyTree* tree, int32_t componentHash);

  /// @brief Method GetPackageJObject, addr 0x266cf58, size 0x740, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* GetPackageJObject(::Unity::Services::Core::Internal::DependencyTree* tree, int32_t packageHash);

  /// @brief Method IsOptional, addr 0x266d9f4, size 0x80, virtual false, abstract: false, final false
  static inline bool IsOptional(::Unity::Services::Core::Internal::DependencyTree* tree, int32_t componentTypeHash);

  /// @brief Method IsProvided, addr 0x266da74, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsProvided(::Unity::Services::Core::Internal::DependencyTree* tree, int32_t componentTypeHash);

  /// @brief Method ToJson, addr 0x266c7bc, size 0x79c, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::Unity::Services::Core::Internal::DependencyTree* tree, ::System::Collections::Generic::ICollection_1<int32_t>* order);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependencyTreeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependencyTreeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependencyTreeExtensions(DependencyTreeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependencyTreeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependencyTreeExtensions(DependencyTreeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTreeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeExtensions*, "Unity.Services.Core.Internal", "DependencyTreeExtensions");

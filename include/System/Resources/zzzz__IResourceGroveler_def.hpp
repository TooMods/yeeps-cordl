#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IResourceGroveler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System::Resources {
class IResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::IResourceGroveler);
// Type: System.Resources::IResourceGroveler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::IResourceGroveler*
class CORDL_TYPE IResourceGroveler {
public:
  // Declarations
  /// @brief Method GrovelForResourceSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                bool createIfNotExists, ByRef<::System::Threading::StackCrawlMark> stackMark);

  // Ctor Parameters [CppParam { name: "", ty: "IResourceGroveler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResourceGroveler(IResourceGroveler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResourceGroveler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceGroveler(IResourceGroveler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Resources
NEED_NO_BOX(::System::Resources::IResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::IResourceGroveler*, "System.Resources", "IResourceGroveler");

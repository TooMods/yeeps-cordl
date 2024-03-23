#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListSource)
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::ComponentModel {
class IListSource;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IListSource);
// Type: System.ComponentModel::IListSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IListSource*
class CORDL_TYPE IListSource {
public:
  // Declarations
  __declspec(property(get = get_ContainsListCollection)) bool ContainsListCollection;

  /// @brief Method GetList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IList* GetList();

  /// @brief Method get_ContainsListCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ContainsListCollection();

  // Ctor Parameters [CppParam { name: "", ty: "IListSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListSource(IListSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListSource(IListSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IListSource);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IListSource*, "System.ComponentModel", "IListSource");

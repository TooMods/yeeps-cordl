#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentCollection)
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentCollection);
// Type: System.ComponentModel::ComponentCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ComponentCollection*
class CORDL_TYPE ComponentCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item))::System::ComponentModel::IComponent* Item[];

  __declspec(property(get = get_Item))::System::ComponentModel::IComponent* Item[];

  /// @brief Method CopyTo, addr 0x1ae7358, size 0x40, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> array, int32_t index);

  static inline ::System::ComponentModel::ComponentCollection* New_ctor(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> components);

  /// @brief Method .ctor, addr 0x1ae6cf8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> components);

  /// @brief Method get_Item, addr 0x1ae72c8, size 0x90, virtual true, abstract: false, final false
  inline ::System::ComponentModel::IComponent* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x1ae6d40, size 0x588, virtual true, abstract: false, final false
  inline ::System::ComponentModel::IComponent* get_Item(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentCollection(ComponentCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentCollection(ComponentCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentCollection, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentCollection*, "System.ComponentModel", "ComponentCollection");

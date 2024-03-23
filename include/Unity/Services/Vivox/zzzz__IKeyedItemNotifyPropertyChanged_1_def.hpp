#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyedItemNotifyPropertyChanged_1)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1);
// Type: Unity.Services.Vivox::IKeyedItemNotifyPropertyChanged`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename TK>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IKeyedItemNotifyPropertyChanged`1<TK>*
class CORDL_TYPE IKeyedItemNotifyPropertyChanged_1 {
public:
  // Declarations
  __declspec(property(get = get_Key)) TK Key;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TK get_Key();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyedItemNotifyPropertyChanged_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKeyedItemNotifyPropertyChanged_1(IKeyedItemNotifyPropertyChanged_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyedItemNotifyPropertyChanged_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyedItemNotifyPropertyChanged_1(IKeyedItemNotifyPropertyChanged_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1, "Unity.Services.Vivox", "IKeyedItemNotifyPropertyChanged`1");

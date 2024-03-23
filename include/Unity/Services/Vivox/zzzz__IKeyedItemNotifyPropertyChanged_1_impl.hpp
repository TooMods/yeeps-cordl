#pragma once
#include "Unity/Services/Vivox/zzzz__IKeyedItemNotifyPropertyChanged_1_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
template <typename TK> constexpr Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<TK>::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
template <typename TK>
constexpr ::System::ComponentModel::INotifyPropertyChanged* Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<TK>::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
template <typename TK> inline TK Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<TK>::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<TK>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TK, false>(this, ___internal_method);
}

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INotifyDataErrorInfo)
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
class DataErrorsChangedEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyDataErrorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INotifyDataErrorInfo);
// Type: System.ComponentModel::INotifyDataErrorInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::INotifyDataErrorInfo*
class CORDL_TYPE INotifyDataErrorInfo {
public:
  // Declarations
  __declspec(property(get = get_HasErrors)) bool HasErrors;

  /// @brief Method GetErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IEnumerable* GetErrors(::StringW propertyName);

  /// @brief Method add_ErrorsChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>* value);

  /// @brief Method get_HasErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasErrors();

  /// @brief Method remove_ErrorsChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyDataErrorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyDataErrorInfo(INotifyDataErrorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyDataErrorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyDataErrorInfo(INotifyDataErrorInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INotifyDataErrorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INotifyDataErrorInfo*, "System.ComponentModel", "INotifyDataErrorInfo");

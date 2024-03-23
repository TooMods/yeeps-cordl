#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDirectedTextMessage)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class ITextMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IDirectedTextMessage);
// Type: Unity.Services.Vivox::IDirectedTextMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IDirectedTextMessage*
class CORDL_TYPE IDirectedTextMessage {
public:
  // Declarations
  __declspec(property(get = get_ApplicationStanzaBody))::StringW ApplicationStanzaBody;

  __declspec(property(get = get_ApplicationStanzaNamespace))::StringW ApplicationStanzaNamespace;

  __declspec(property(get = get_FromSelf)) bool FromSelf;

  __declspec(property(get = get_LoginSession))::Unity::Services::Vivox::ILoginSession* LoginSession;

  __declspec(property(get = get_Sender))::Unity::Services::Vivox::AccountId* Sender;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITextMessage"
  constexpr operator ::Unity::Services::Vivox::ITextMessage*() noexcept;

  /// @brief Method get_ApplicationStanzaBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ApplicationStanzaBody();

  /// @brief Method get_ApplicationStanzaNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ApplicationStanzaNamespace();

  /// @brief Method get_FromSelf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_FromSelf();

  /// @brief Method get_LoginSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ILoginSession* get_LoginSession();

  /// @brief Method get_Sender, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITextMessage"
  constexpr ::Unity::Services::Vivox::ITextMessage* i___Unity__Services__Vivox__ITextMessage() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDirectedTextMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDirectedTextMessage(IDirectedTextMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDirectedTextMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDirectedTextMessage(IDirectedTextMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IDirectedTextMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IDirectedTextMessage*, "Unity.Services.Vivox", "IDirectedTextMessage");

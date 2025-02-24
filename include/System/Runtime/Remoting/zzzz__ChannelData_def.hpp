#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChannelData)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ChannelData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ChannelData);
// Type: System.Runtime.Remoting::ChannelData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ChannelData*
class CORDL_TYPE ChannelData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ClientProviders))::System::Collections::ArrayList* ClientProviders;

  __declspec(property(get = get_CustomProperties))::System::Collections::Hashtable* CustomProperties;

  /// @brief Field DelayLoadAsClientChannel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DelayLoadAsClientChannel, put = __cordl_internal_set_DelayLoadAsClientChannel))::StringW DelayLoadAsClientChannel;

  /// @brief Field Id, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id))::StringW Id;

  /// @brief Field Ref, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Ref, put = __cordl_internal_set_Ref))::StringW Ref;

  __declspec(property(get = get_ServerProviders))::System::Collections::ArrayList* ServerProviders;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::StringW Type;

  /// @brief Field _clientProviders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientProviders, put = __cordl_internal_set__clientProviders))::System::Collections::ArrayList* _clientProviders;

  /// @brief Field _customProperties, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__customProperties, put = __cordl_internal_set__customProperties))::System::Collections::Hashtable* _customProperties;

  /// @brief Field _serverProviders, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serverProviders, put = __cordl_internal_set__serverProviders))::System::Collections::ArrayList* _serverProviders;

  /// @brief Method CopyFrom, addr 0x1977ffc, size 0x940, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Runtime::Remoting::ChannelData* other);

  static inline ::System::Runtime::Remoting::ChannelData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_DelayLoadAsClientChannel() const;

  constexpr ::StringW& __cordl_internal_get_DelayLoadAsClientChannel();

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr ::StringW const& __cordl_internal_get_Ref() const;

  constexpr ::StringW& __cordl_internal_get_Ref();

  constexpr ::StringW const& __cordl_internal_get_Type() const;

  constexpr ::StringW& __cordl_internal_get_Type();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__clientProviders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__clientProviders() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__customProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__customProperties() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__serverProviders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__serverProviders() const;

  constexpr void __cordl_internal_set_DelayLoadAsClientChannel(::StringW value);

  constexpr void __cordl_internal_set_Id(::StringW value);

  constexpr void __cordl_internal_set_Ref(::StringW value);

  constexpr void __cordl_internal_set_Type(::StringW value);

  constexpr void __cordl_internal_set__clientProviders(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__customProperties(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__serverProviders(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x197cc18, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientProviders, addr 0x19790ac, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_ClientProviders();

  /// @brief Method get_CustomProperties, addr 0x197cccc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_CustomProperties();

  /// @brief Method get_ServerProviders, addr 0x197893c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_ServerProviders();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelData(ChannelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelData(ChannelData const&) = delete;

  /// @brief Field Ref, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Ref;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Type;

  /// @brief Field Id, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief Field DelayLoadAsClientChannel, offset: 0x28, size: 0x8, def value: None
  ::StringW ___DelayLoadAsClientChannel;

  /// @brief Field _serverProviders, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____serverProviders;

  /// @brief Field _clientProviders, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____clientProviders;

  /// @brief Field _customProperties, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____customProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ChannelData, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ___Ref) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ___DelayLoadAsClientChannel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ____serverProviders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ____clientProviders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ChannelData, ____customProperties) == 0x40, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ChannelData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ChannelData*, "System.Runtime.Remoting", "ChannelData");

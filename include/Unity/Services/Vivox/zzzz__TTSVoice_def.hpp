#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSVoice)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ITTSVoice;
}
namespace Unity::Services::Vivox {
class vx_tts_voice_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class TTSVoice;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::TTSVoice);
// Type: Unity.Services.Vivox::TTSVoice
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::TTSVoice*
class CORDL_TYPE TTSVoice : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) uint32_t Key;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field PropertyChanged, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) uint32_t _Key_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITTSVoice"
  constexpr operator ::Unity::Services::Vivox::ITTSVoice*() noexcept;

  /// @brief Method Equals, addr 0x2cafaf4, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2cafbf0, size 0xb0, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::TTSVoice* other);

  /// @brief Method GetHashCode, addr 0x2cafca0, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Unity::Services::Vivox::TTSVoice* New_ctor(::Unity::Services::Vivox::vx_tts_voice_t* voice);

  /// @brief Method OnPropertyChanged, addr 0x2cafe30, size 0x98, virtual true, abstract: false, final false
  inline void OnPropertyChanged(::StringW propertyName);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr uint32_t const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Key_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2caf92c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::vx_tts_voice_t* voice);

  /// @brief Method add_PropertyChanged, addr 0x2cafcf8, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Key, addr 0x2cafae4, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_Key();

  /// @brief Method get_Name, addr 0x2cafad4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1_uint32_t_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITTSVoice"
  constexpr ::Unity::Services::Vivox::ITTSVoice* i___Unity__Services__Vivox__ITTSVoice() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2cafd94, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Key, addr 0x2cafaec, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(uint32_t value);

  /// @brief Method set_Name, addr 0x2cafadc, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TTSVoice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TTSVoice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TTSVoice(TTSVoice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TTSVoice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TTSVoice(TTSVoice const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x4, def value: None
  uint32_t ____Key_k__BackingField;

  /// @brief Field PropertyChanged, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::TTSVoice, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSVoice, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSVoice, ____Key_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::TTSVoice, ___PropertyChanged) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::TTSVoice);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::TTSVoice*, "Unity.Services.Vivox", "TTSVoice");

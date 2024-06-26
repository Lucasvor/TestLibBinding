﻿
#if IOS
using LibTest;

using Foundation;
#endif
using Com.Datablink.Mobile200.Embeddedsdk;

namespace BAteste;

public partial class MainPage : ContentPage
{
	int count = 0;

	public MainPage()
	{
		InitializeComponent();
	}

	private void OnCounterClicked(object sender, EventArgs e)
	{
		count++;
		var key = "asfsafasfasfasa";
        var NumberChars = key.Length;
        var bytes = new byte[NumberChars / 2];


		var listGuids = new List<string>
		{
			Guid.NewGuid().ToString(),
                        Guid.NewGuid().ToString()
		};

		var _api = EmbeddedSdkFactory.NewInstance();
		var result = _api.Init(bytes, Microsoft.Maui.ApplicationModel.Platform.CurrentActivity, listGuids, true);

		#if IOS

        var data = NSData.FromArray(bytes);



        var value = new EmbeddedSdk();
		var res = value.Init(data);


		var blob = new Blob();

		blob.SetBlob("asfsafasfasfasfa");

		var valueBlobk = blob.GetBlob;
		//var valueBlob = new BlobSdk();
		//valueBlob.SetBlobSdkWithValue("asfasfasfasfasfas");

//		var getBlobk = valueBlob.BlobSdkA;
#endif

        if (count == 1)
			CounterBtn.Text = $"Clicked {count} time";
		else
			CounterBtn.Text = $"Clicked {count} times";

		SemanticScreenReader.Announce(CounterBtn.Text);
	}
}




		/* Enter your code here. */
                try {
            long long result = Server::compute(A, B);
            cout << result << endl;
        }
        catch (const std::bad_alloc&) {
            cout << "Not enough memory" << endl;
        }
        catch (const std::exception& e) {
            cout << "Exception: " << e.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna